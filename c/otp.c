#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random OTP
int generateOTP() {
    return rand() % 10000; // 4-digit OTP
}

// Function to send OTP to the user (in a real-world scenario, this would involve sending it via SMS, email, etc.)
void sendOTP(int otp) {
    printf("OTP sent: %04d\n", otp);
}

// Function to verify the entered OTP
int verifyOTP(int enteredOTP, int generatedOTP) {
    return enteredOTP == generatedOTP;
}

int main() {
    srand(time(NULL)); // Seed for random number generation

    // Step 1: Generate OTP
    int otp = generateOTP();

    // Step 2: Send OTP to the user
    sendOTP(otp);

    // Step 3: Receive and verify the entered OTP
    int enteredOTP;
    printf("Enter the OTP: ");
    scanf("%d", &enteredOTP);

    if (verifyOTP(enteredOTP, otp)) {
        printf("OTP verification successful. Access granted!\n");
    } else {
        printf("OTP verification failed. Access denied!\n");
    }

    return 0;
}