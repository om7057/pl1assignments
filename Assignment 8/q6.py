post_metrics = [
    [100, 20, 10],
    [75, 15, 5],
    [120, 30, 12],
    [90, 18, 9],
    [80, 22, 8]
]

def calculate_average_engagement(metrics_list):
    total_likes = 0
    total_comments = 0
    total_shares = 0
    
    for post in metrics_list:
        total_likes += post[0]
        total_comments += post[1]
        total_shares += post[2]
    
    total_posts = len(metrics_list)
    average_likes = total_likes / total_posts
    average_comments = total_comments / total_posts
    average_shares = total_shares / total_posts
    
    return average_likes, average_comments, average_shares

avg_likes, avg_comments, avg_shares = calculate_average_engagement(post_metrics)
print(f"Average Likes: {avg_likes}")
print(f"Average Comments: {avg_comments}")
print(f"Average Shares: {avg_shares}")
