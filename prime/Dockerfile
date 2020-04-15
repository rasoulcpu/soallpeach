# Get the GCC preinstalled image from Docker Hub
FROM gcc:4.9
 
# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY ./src /src/myapp
 
# Specify the working directory
WORKDIR /src/myapp
 
# Use GCC to compile the Test.cpp source file
RUN g++ -o myapp main.c
 
# Run the program output from the previous step
CMD ["./myapp"]