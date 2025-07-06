# 1 "data//maps/MtCeram_Caves/scripts.pory"

# 2 "data//maps/MtCeram_Caves/scripts.pory"
    .set LOCALID_GRETA, 3
# 3 "data//maps/MtCeram_Caves/scripts.pory"
    .set LOCALID_SIZZ, 4
# 4 "data//maps/MtCeram_Caves/scripts.pory"
    .set LOCALID_VEN, 5

MtCeram_Caves_MapScripts::
# 8 "data//maps/MtCeram_Caves/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtCeram_Caves_OnTransition
	.byte 0


MtCeram_Caves_OnTransition::
# 12 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CHAMPION_GRETA_COMPLETE, MtCeram_Caves_OnTransition_2
# 13 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CHAMPION_GRETA_SETUP, MtCeram_Caves_OnTransition_4
	return

MtCeram_Caves_OnTransition_2:
	end

MtCeram_Caves_OnTransition_4:
# 14 "data//maps/MtCeram_Caves/scripts.pory"
	setobjectxyperm 6, 30, 43
# 15 "data//maps/MtCeram_Caves/scripts.pory"
	setobjectxyperm 7, 29, 43
	end


MtCeram_Caves_Banette::
# 21 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 22 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_BANETTE, CRY_MODE_NORMAL
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Banette_Text_0
# 24 "data//maps/MtCeram_Caves/scripts.pory"
	releaseall
	end


MtCeram_Caves_Greta_Battle::
# 29 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 30 "data//maps/MtCeram_Caves/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 32 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox_delay MtCeram_Caves_Greta_Battle_Text_0, MtCeram_Caves_Greta_Battle_Text_1
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement 6, MtCeram_Caves_Greta_Battle_Movement_0
# 35 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement 7, MtCeram_Caves_Greta_Battle_Movement_0
# 36 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 38 "data//maps/MtCeram_Caves/scripts.pory"
	delay 24
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox_delay MtCeram_Caves_Greta_Battle_Text_0, MtCeram_Caves_Greta_Battle_Text_2
# 42 "data//maps/MtCeram_Caves/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_GRETA, MtCeram_Caves_Greta_Battle_Text_2
# 44 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox_delay MtCeram_Caves_Greta_Battle_Text_0, MtCeram_Caves_Greta_Battle_Text_2
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement 6, MtCeram_Caves_Greta_Battle_Movement_1
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement 7, MtCeram_Caves_Greta_Battle_Movement_2
# 47 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 49 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject 6
# 50 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject 7
# 52 "data//maps/MtCeram_Caves/scripts.pory"
	setflag FLAG_CHAMPION_GRETA_COMPLETE
# 54 "data//maps/MtCeram_Caves/scripts.pory"
	releaseall
	end


MtCeram_Caves_Greta_Trigger0::
# 62 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_GRETA_MEETING, MtCeram_Caves_Greta_Trigger0_2
# 64 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 65 "data//maps/MtCeram_Caves/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 67 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Trigger0_Movement_0
# 68 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 69 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Trigger0_Movement_1
# 70 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Trigger0_Movement_2
# 71 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 72 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Trigger0_Text_1
# 73 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Greta_Trigger0_Movement_3
# 76 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 78 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Greta_Main
	return

MtCeram_Caves_Greta_Trigger0_2:
	end


MtCeram_Caves_Greta_Trigger1::
# 82 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_GRETA_MEETING, MtCeram_Caves_Greta_Trigger1_2
# 84 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 85 "data//maps/MtCeram_Caves/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 86 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Trigger0_Movement_0
# 87 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 88 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Trigger0_Movement_1
# 89 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Trigger0_Movement_2
# 90 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 91 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Trigger0_Text_1
# 92 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 94 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Greta_Trigger1_Movement_0
# 95 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 97 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Greta_Main
	return

MtCeram_Caves_Greta_Trigger1_2:
	end


MtCeram_Caves_Greta_Trigger2::
# 101 "data//maps/MtCeram_Caves/scripts.pory"
	goto_if_set FLAG_CERAM_CAVES_GRETA_MEETING, MtCeram_Caves_Greta_Trigger2_2
# 103 "data//maps/MtCeram_Caves/scripts.pory"
	lockall
# 104 "data//maps/MtCeram_Caves/scripts.pory"
	playbgm MUS_ENCOUNTER_TWINS, FALSE
# 105 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Trigger0_Movement_0
# 106 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 107 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_NORMAL
# 108 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Trigger0_Movement_1
# 109 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Trigger0_Movement_2
# 110 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 111 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 112 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Trigger0_Text_1
# 113 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 115 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Caves_Greta_Trigger2_Movement_0
# 116 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 118 "data//maps/MtCeram_Caves/scripts.pory"
	goto MtCeram_Caves_Greta_Main
	return

MtCeram_Caves_Greta_Trigger2_2:
	end


MtCeram_Caves_Greta_Main::
# 125 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 126 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_0
# 127 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 128 "data//maps/MtCeram_Caves/scripts.pory"
	delay 24
# 129 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_SIZZLIPEDE, CRY_MODE_ENCOUNTER
# 130 "data//maps/MtCeram_Caves/scripts.pory"
	playmoncry SPECIES_VENIPEDE, CRY_MODE_ENCOUNTER
# 131 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Main_Movement_0
# 132 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Main_Movement_0
# 133 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 134 "data//maps/MtCeram_Caves/scripts.pory"
	delay 30
# 135 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 136 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_1
# 137 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 138 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_SIZZ, MtCeram_Caves_Greta_Main_Movement_1
# 139 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_VEN, MtCeram_Caves_Greta_Main_Movement_2
# 140 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 142 "data//maps/MtCeram_Caves/scripts.pory"
	setwildbattle SPECIES_SIZZLIPEDE, 17, ITEM_NONE, SPECIES_VENIPEDE, 17, ITEM_NONE
# 143 "data//maps/MtCeram_Caves/scripts.pory"
	dowildbattle
# 145 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_SIZZ
# 146 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_VEN
# 147 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Trigger0_Text_0
# 148 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_2
# 149 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Battle_Text_0
# 150 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_3
# 151 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 152 "data//maps/MtCeram_Caves/scripts.pory"
	delay 16
# 153 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Battle_Text_0
# 154 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_4
# 155 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 157 "data//maps/MtCeram_Caves/scripts.pory"
	delay 24
# 158 "data//maps/MtCeram_Caves/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MtCeram_Caves_Greta_Main_Text_5, MtCeram_Caves_Greta_Main_Text_6, MtCeram_Caves_Greta_Main_Text_7
# 159 "data//maps/MtCeram_Caves/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MtCeram_Caves_Greta_Main_2
# 164 "data//maps/MtCeram_Caves/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtCeram_Caves_Greta_Main_5
# 168 "data//maps/MtCeram_Caves/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MtCeram_Caves_Greta_Main_8
MtCeram_Caves_Greta_Main_1:
# 174 "data//maps/MtCeram_Caves/scripts.pory"
	speakername MtCeram_Caves_Greta_Battle_Text_0
# 175 "data//maps/MtCeram_Caves/scripts.pory"
	msgbox MtCeram_Caves_Greta_Main_Text_8
# 176 "data//maps/MtCeram_Caves/scripts.pory"
	release
# 177 "data//maps/MtCeram_Caves/scripts.pory"
	setflag FLAG_CERAM_CAVES_GRETA_MEETING
# 179 "data//maps/MtCeram_Caves/scripts.pory"
	applymovement LOCALID_GRETA, MtCeram_Caves_Greta_Battle_Movement_1
# 180 "data//maps/MtCeram_Caves/scripts.pory"
	waitmovement 0
# 181 "data//maps/MtCeram_Caves/scripts.pory"
	removeobject LOCALID_GRETA
# 183 "data//maps/MtCeram_Caves/scripts.pory"
	fadedefaultbgm
# 184 "data//maps/MtCeram_Caves/scripts.pory"
	releaseall
	end

MtCeram_Caves_Greta_Main_2:
# 160 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_DARK_GEM
	goto MtCeram_Caves_Greta_Main_1

MtCeram_Caves_Greta_Main_5:
# 165 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_FIGHTING_GEM
	goto MtCeram_Caves_Greta_Main_1

MtCeram_Caves_Greta_Main_8:
# 169 "data//maps/MtCeram_Caves/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
	goto MtCeram_Caves_Greta_Main_1


# 34 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Battle_Movement_0:
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
# 34 "data//maps/MtCeram_Caves/scripts.pory"
	jump_in_place_down
	step_end

# 45 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Battle_Movement_1:
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 45 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
	step_end

# 46 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Battle_Movement_2:
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_right
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
	step_end

# 67 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger0_Movement_0:
# 67 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
	step_end

# 69 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger0_Movement_1:
# 69 "data//maps/MtCeram_Caves/scripts.pory"
	jump_in_place_right
	step_end

# 70 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger0_Movement_2:
# 70 "data//maps/MtCeram_Caves/scripts.pory"
	jump_in_place_left
	step_end

# 75 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger0_Movement_3:
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 75 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 94 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger1_Movement_0:
# 94 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 94 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 94 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 94 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 94 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 94 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 94 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 115 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Trigger2_Movement_0:
# 115 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 115 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 115 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 115 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 115 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 115 "data//maps/MtCeram_Caves/scripts.pory"
	walk_left
# 115 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
# 115 "data//maps/MtCeram_Caves/scripts.pory"
	walk_up
	step_end

# 131 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_0:
# 131 "data//maps/MtCeram_Caves/scripts.pory"
	face_down
# 131 "data//maps/MtCeram_Caves/scripts.pory"
	emote_exclamation_mark
	step_end

# 138 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_1:
# 138 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 138 "data//maps/MtCeram_Caves/scripts.pory"
	face_right
	step_end

# 139 "data//maps/MtCeram_Caves/scripts.pory"
MtCeram_Caves_Greta_Main_Movement_2:
# 139 "data//maps/MtCeram_Caves/scripts.pory"
	walk_down
# 139 "data//maps/MtCeram_Caves/scripts.pory"
	face_left
	step_end

MtCeram_Caves_Banette_Text_0:
# 23 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Banette is looking at the wall.$"

MtCeram_Caves_Greta_Battle_Text_0:
# 32 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Greta$"

MtCeram_Caves_Greta_Battle_Text_1:
# 32 "data//maps/MtCeram_Caves/scripts.pory"
	.string "I told {PLAYER} to come to where we\n"
	.string "first met...but was it here?\l"
	.string "Or was it somewhere else?$"

MtCeram_Caves_Greta_Battle_Text_2:
# 40 "data//maps/MtCeram_Caves/scripts.pory"
	.string "$"

MtCeram_Caves_Greta_Trigger0_Text_0:
# 71 "data//maps/MtCeram_Caves/scripts.pory"
	.string "???$"

MtCeram_Caves_Greta_Trigger0_Text_1:
# 72 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Help!$"

MtCeram_Caves_Greta_Main_Text_0:
# 126 "data//maps/MtCeram_Caves/scripts.pory"
	.string "I'm trapped in between this Sizzlipede\n"
	.string "and Venipede who are fighting each\l"
	.string "other! I can't get free!$"

MtCeram_Caves_Greta_Main_Text_1:
# 136 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Uh oh, they've noticed you...$"

MtCeram_Caves_Greta_Main_Text_2:
# 148 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Thank you so much! I forgot my Pokémon\n"
	.string "at home and couldn't do anything!\l"
	.string "People at the Ceram Base Camp told me\l"
	.string "that the Sizzlipede and Venipede fight\l"
	.string "all the time...that's what I get for not\l"
	.string "taking them seriously!$"

MtCeram_Caves_Greta_Main_Text_3:
# 150 "data//maps/MtCeram_Caves/scripts.pory"
	.string "I'm Greta. I'm a traveling merchant!\p"
	.string "Are you a trainer? What's your name?\p"
	.string "...\p"
	.string "{PLAYER}? Nice to meet you!\n"
	.string "I have to thank you for saving me.\p"
	.string "Lets see...$"

MtCeram_Caves_Greta_Main_Text_4:
# 154 "data//maps/MtCeram_Caves/scripts.pory"
	.string "I have some leftover stock that you\n"
	.string "might like. These gems came from Mt.\l"
	.string "Mirroh, on the other side of Cormoria!\p"
	.string "Once per battle, a gem increases the\n"
	.string "power of its corresponding move type\l"
	.string "by a third. Take any one you like!$"

MtCeram_Caves_Greta_Main_Text_5:
# 158 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Dark Gem$"

MtCeram_Caves_Greta_Main_Text_6:
# 158 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Fighting Gem$"

MtCeram_Caves_Greta_Main_Text_7:
# 158 "data//maps/MtCeram_Caves/scripts.pory"
	.string "Psychic Gem$"

MtCeram_Caves_Greta_Main_Text_8:
# 175 "data//maps/MtCeram_Caves/scripts.pory"
	.string "I travel across all the routes and\n"
	.string "towns of Cormoria, so I bet we'll meet\l"
	.string "again - somewhere or the other.\l"
	.string "Please buy my stuff then!$"
