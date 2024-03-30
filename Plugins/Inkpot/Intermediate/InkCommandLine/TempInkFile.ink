VAR currentSpeaker = "No one"
VAR characters = "hajime_angry"

//LIST characters = hajime_angry, hajime_thinking, chiaki_glitch, chiaki_sad

~currentSpeaker = "chiaki"
~characters = "chiaki_sad"
Hello, it's me {currentSpeaker}
~currentSpeaker = "hajime"
~characters = "hajime_thinking"
How are you?
*[good thanks]
->good_thanks
*[not great]
->not_great
*[...]
->no_answer

==good_thanks==
~currentSpeaker = "hajime"
~characters = "hajime_thinking"
I'm doing well thank you.
~currentSpeaker = "chiaki"
~characters = "chiaki_glitch"
That's good!
-> END
==not_great==
~currentSpeaker = "hajime"
~characters = "hajime_angry"
I'm terrible.
~currentSpeaker = "chiaki"
~characters = "chiaki_sad"
That's not good!
-> END
==no_answer==
~currentSpeaker = "chiaki"
~characters = "chiaki_sad"
...
~currentSpeaker = "hajime"
~characters = "hajime_thinking"
Why don't you speak!
-> END