# Use an official C compiler base image
FROM gcc:latest

# Set working directory
WORKDIR /app

# Copy project files
COPY . .

# Compile the program
RUN make all

# Run the shell when container starts
CMD ["./simple_shell"]
