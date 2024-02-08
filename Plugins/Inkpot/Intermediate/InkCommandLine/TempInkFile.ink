VAR currentSpeaker = "No one"
~currentSpeaker = "person1"
Hello {currentSpeaker}
~currentSpeaker = "person2"
How are you?
*[good thanks]
->good_thanks
*[not great]
->not_great
*[...]
->no_answer

==good_thanks==
~currentSpeaker = "person1"
I'm doing well thank you.
~currentSpeaker = "person2"
That's good!
-> END
==not_great==
~currentSpeaker = "person1"
I'm terrible.
~currentSpeaker = "person2"
That's not good!
-> END
==no_answer==
~currentSpeaker = "person1"
...
~currentSpeaker = "person2"
Why don't you speak!
-> END