import tweepy
from textblob import TextBlob

consumer_key = 'TTEQflKkgEBE9Gr5DpNlaw2Sq'
consumer_secret_key = 'wlsVVAyYjoaQt1XBZMdWuZCltXBUe7S4ah8PXgZQcwnBLqDR5q'

access_token = '970687506361475073-IwEyTUq4PoMMzWhaIkpGmMcHi8Uy1AY'
access_token_secret = 'isCNMvlTCYw4eBRW05PtZNOT4E0Ug3BaygZHDmpce83lP'

auth = tweepy.OAuthHandler(consumer_key, consumer_secret_key)
auth.set_access_token(access_token, access_token_secret)

api = tweepy.API(auth)

public_tweets = api.home_timeline()

for tweet in public_tweets:
    print(tweet.text)
    analysis = TextBlob(tweet.text)
    print(analysis.sentiment)