#include <iostream>
#include <vector>
#include <string>

int main() {
    // Team members' names
    std::vector<std::string> teamMembers = {
    
        "Team leader Loren",
        "Deputy team leader Safaa",
        "Academy leader Imad",
        "Vice Academy Saya",
        "Chat monitor Amir",
        "Mujahid",
        "Anas",
        "Nurhan",
        "Najat",
        "Mohammed",
        "Rita",
        "Maria",
        "Knazu",
        "Loki",
        "Rheina",
        
    };

    // ASCII art representations of team members
    std::vector<std::string> asciiArt = {
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Team leader Loren
        "  O\n /|\\\n / \\\n",       // ASCII art for Deputy team leader Safaa
        "  ^\n /|\\\n / \\\n",       // ASCII art for Academy leader Imad
        "   O\n  /|\\\n  / \\\n",        // ASCII art for Vice Academy Saya
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Chat monitor Amir
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Mujahid
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Anas
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Nurhan
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Najat
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Mohammed
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Rita
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Maria
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Knazu
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Loki
        "   O\n  /|\\\n  / \\\n",   // ASCII art for Rheina

        
    };

    // Display team members and their ASCII art
    std::cout << "Team Members:\n";
    for (size_t i = 0; i < teamMembers.size(); ++i) {
        std::cout << "Name: " << teamMembers[i] << std::endl;
        std::cout << "Image:\n";
        std::cout << asciiArt[i] << std::endl;
        std::cout << std::endl;
    }

    return 0;
}