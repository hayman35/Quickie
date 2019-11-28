
#include "../Headers/voce.h"


int main(int argc, char **argv)
{
	voce::init("../../lib", true, false, "", "");

	voce::synthesize("This is a speech synthesis test.");
	voce::synthesize("Type a message to hear it spoken aloud.");

	std::cout << "This is a speech synthesis test.  " 
		<< "Type a message to hear it spoken aloud." << std::endl;
	std::cout << "Type 's' + 'enter' to make the "
		<< "synthesizer stop speaking.  Type 'q' + 'enter' to quit." 
		<< std::endl;

	std::string s;

	while (s != "q")
	{
		// Read a line from keyboard.
		std::getline(std::cin, s);

		if ("s" == s)
		{
			voce::stopSynthesizing();
		}
		else
		{
			// Speak what was typed.
			voce::synthesize(s);
		}
	}
	
	voce::destroy();
	return 0;
}
