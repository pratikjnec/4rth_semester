import yt_dlp

# Get video link from user
link = input("Enter Link of Youtube Video: ")

# Set options to get the best quality available
ydl_opts = {
    'format': 'bestvideo+bestaudio/best',
    'merge_output_format': 'mp4',  # Ensures the video is downloaded in mp4 format
    'outtmpl': '%(title)s.%(ext)s'  # Saves the file with the name of the video title
}

with yt_dlp.YoutubeDL(ydl_opts) as ydl:
    info_dict = ydl.extract_info(link, download=False)
    video_title = info_dict.get('title', None)
    video_views = info_dict.get('view_count', None)
    video_duration = info_dict.get('duration', None)
    video_description = info_dict.get('description', None)
    video_rating = info_dict.get('average_rating', None)

    print(f"Title: {video_title}")
    print(f"Views: {video_views}")
    print(f"Duration: {video_duration} seconds")
    print(f"Description: {video_description}")
    print(f"Ratings: {video_rating}")

    # Download the video in the best quality
    ydl.download([link])
    print("Download completed in the highest quality available!!")
