#!bin/sh
#ask some question and collect the answer
dialog --title "questionnaire" --msgbox "welcome to my simple survey " 9 18
dialog --title "confirm" --yesno "are you willing to take part?" 9 18
if [ $? != 0 ]; then
dialog --infobox "thank you any way " 5 20
sleep 2
dialog --clear
elif [[ $? == 1 ]]; then
dialog --title "questionnaire" --inputbox "please enter your name " 9 30 2> _1.txt
Q_NAME=$(cat _1.txt)
dialog --menu "$Q_NAME, what music do you like best?" 15 30 4 1 "classic" 2 "jazz" 3 "Country" 4 "Others" 2>_1.txt
Q_MUSIC=$(cat _1.txt)
if [ "$Q_MUSIC" = "1" ]; then
dialog --title "Like classical" --msgbox "Good CHoice " 13 35
else
  dialog --title "Doesn't like classical" --msgbox "shame" 12 25
  dialog --menu "$Q_NAME, what music do you like best?" 15 30 4 1 "classic" 2 "jazz" 3 "Country" 4 "Others" 2>_1.txt
  dialog --menu "what is your problem " 12 25 4 1 "pagal ho" 2 "dimag kharab hai " 3 "pakka chatka ho" 4 " bhaag"
fi
sleep 2
dialog --clear
fi
exit 0
