import cv2 
import numpy as np 
import time 

# replace the red pixels (or undesired area) with 
# background pixels to generate the invisibility feature. 

print(cv2.__version__) 

# Change the path to the video file as needed
capture_video = cv2.VideoCapture("video.mp4") 
    
# Give the camera time to warm up 
time.sleep(1) 
count = 0
background = None

# Capture the background frame
for i in range(60): 
    return_val, background = capture_video.read() 
    if not return_val: 
        continue

# Ensure the frame was captured before processing
if background is not None:
    background = np.flip(background, axis=1)  # flipping the frame 

# Read from the video
while capture_video.isOpened() and background is not None: 
    return_val, img = capture_video.read() 
    if not return_val: 
        break
    count += 1
    img = np.flip(img, axis=1) 

    # Convert the image - BGR to HSV 
    hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV) 

    # Setting the lower and upper range for mask1 
    lower_red = np.array([100, 40, 40])  
    upper_red = np.array([100, 255, 255]) 
    mask1 = cv2.inRange(hsv, lower_red, upper_red) 

    # Setting the lower and upper range for mask2 
    lower_red = np.array([155, 40, 40]) 
    upper_red = np.array([180, 255, 255]) 
    mask2 = cv2.inRange(hsv, lower_red, upper_red) 

    # Combine the masks
    mask1 = mask1 + mask2 

    # Refining the mask corresponding to the detected red color 
    mask1 = cv2.morphologyEx(mask1, cv2.MORPH_OPEN, np.ones((3, 3), np.uint8), iterations=2) 
    mask1 = cv2.dilate(mask1, np.ones((3, 3), np.uint8), iterations=1) 
    mask2 = cv2.bitwise_not(mask1) 

    # Generating the final output 
    res1 = cv2.bitwise_and(background, background, mask=mask1) 
    res2 = cv2.bitwise_and(img, img, mask=mask2) 
    final_output = cv2.addWeighted(res1, 1, res2, 1, 0) 

    cv2.imshow("INVISIBLE MAN", final_output) 
    k = cv2.waitKey(10) 
    if k == 27:  # Press 'ESC' to exit
        break

capture_video.release()  # Release the video capture object
cv2.destroyAllWindows()  # Close all OpenCV windows
