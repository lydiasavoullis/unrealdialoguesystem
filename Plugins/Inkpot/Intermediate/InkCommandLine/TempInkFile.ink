VAR currentSpeaker = "No one"
~currentSpeaker = "person1"
Hello 
~currentSpeaker = "person2"
How are you?
~currentSpeaker = "person1"
*[good thanks]
->good_thanks
*[not great]
->not_great
*[...]
->no_answer

==good_thanks==
~currentSpeaker = "person2"
That's good!
-> END
==not_great==
~currentSpeaker = "person2"
That's not good!
-> END
==no_answer==
~currentSpeaker = "person2"
Why don't you speak!
-> END