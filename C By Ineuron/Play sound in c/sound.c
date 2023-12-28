// #include<windows.h>

// int main() {
//     int i;
//     for(i=0;i<=100;i++) {
//         Beep(1000,50);
//     }
    
 
//     return 0;
// }

// #include <Windows.h>
// #include <mmsystem.h>
// #include<stdio.h>

// #pragma comment(lib, "Winmm.lib")

// int main() {
//     // Replace "path/to/your/audiofile.wav" with the actual path to your audio file
//     const char* filePath = "D:\\C Language\\ineuron\\Play sound in c\\Audio Files\\access-denied-2.wav";
    
//     // Construct the command string for opening the audio file
//     char command[256];
//     sprintf(command, "open \"%s\" type waveaudio alias music", filePath);

//     // Open the audio file
//     if (mciSendStringA(command, NULL, 0, NULL) != 0) {
//         printf("Failed to open audio file.\n");
//         return -1;
//     }

//     // Play the audio file
//     if (mciSendStringA("play music", NULL, 0, NULL) != 0) {
//         printf("Failed to play audio file.\n");
//         return -1;
//     }

//     // Wait for the audio to finish (you may want to add error handling for a more robust application)
//     Sleep(5000); // Adjust the delay as needed

//     // Close the audio file
//     if (mciSendStringA("close music", NULL, 0, NULL) != 0) {
//         printf("Failed to close audio file.\n");
//         return -1;
//     }

//     return 0;
// }

// #include <windows.h>
// #include <stdio.h>
// #include<mmsystem.h>

// int main()
// {
//     PlaySound(TEXT("D:\\C Language\\ineuron\\Play sound in c\\access-denied-2.wav"), NULL, SND_SYNC);
//     return 0;

// }
