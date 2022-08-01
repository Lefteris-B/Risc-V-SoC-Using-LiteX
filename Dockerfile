#!not working missing commands
#todo quartus implementation
#todo litex implemetation


#debian linux, python 3.9 image
FROM python:3.9.13-bullseye

#working directory declaration
WORKDIR /code

#requirement instalation 
COPY requirements.txt ./
RUN pip install --no-cache-dir -r requirements.txt

#copy code directories
COPY . .

#CMD [ "python", "./your-daemon-or-script.py" ]

