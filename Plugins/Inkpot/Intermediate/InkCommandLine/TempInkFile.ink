VAR currentSpeaker = "No one"
VAR characters = "blue"
~currentSpeaker = "person1"
Hello, it's me {currentSpeaker}
~currentSpeaker = "person2"
~characters = "red"
How are you?
*[good thanks]
->good_thanks
*[not great]
->not_great
*[...]
->no_answer

==good_thanks==
~currentSpeaker = "person1"
~characters = "blue"
I'm doing well thank you.
~currentSpeaker = "person2"
That's good!
-> END
==not_great==
~currentSpeaker = "person1"
~characters = "blue"
I'm terrible.
~currentSpeaker = "person2"
That's not good!
-> END
==no_answer==
~currentSpeaker = "person1"
~characters = "blue"
...
~currentSpeaker = "person2"
Why don't you speak!
-> END