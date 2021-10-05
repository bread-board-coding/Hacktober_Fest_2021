#Akhbaar padhke sunao 
import json
import requests

def speak (str):
    from win32com.client import Dispatch
    speak = Dispatch("SAPI.SpVoice")
    speak.speak(str)

if __name__ == '__main__':
    speak("Today's news is .... ")
    url = "https://newsapi.org/v2/top-headlines?country=in&apiKey=9a3f6d5c0311455386c35e778604b558"
    news = requests.get(url).text
    news_dict = json.loads(news)
    arts = news_dict['articles']
    print ("Today's news is \n")
    i = 1
    for article in arts:
        print ( i ,".",article['title'])
        speak(article['title']) 
        speak("  Moving on to the next news.......")
        i+=1
        
    speak("that's all for today thank you......")