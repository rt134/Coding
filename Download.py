import requests 

# If you have auth token then uncomment the commented Lines (5,6,10) and Comment the 12th Line

# auth_token='sdfghjkloerdtfyguhiopfghjkl;fghjkl' #Token
# headerVar = {'Authorization': 'Bearer ' + auth_token}

downloadUrl = "https://tldp.org/LDP/intro-linux/intro-linux.pdf"

# response = requests.get(downloadUrl, header=headerVar)

response = requests.get(downloadUrl)

fileName = response.url[downloadUrl.rfind('/')+1:]

pdf = open(fileName, 'wb') 

pdf.write(response.content)

pdf.close() 

print("Downloaded file named : " + fileName) 


