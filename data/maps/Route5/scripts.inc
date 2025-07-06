Route5_MapScripts::
# 2 "data//maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route5_OnTransition
	.byte 0


Route5_OnTransition::
# 6 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_COMPLETE, Route5_OnTransition_2
# 7 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_SETUP, Route5_OnTransition_4
	return

Route5_OnTransition_2:
	end

Route5_OnTransition_4:
# 8 "data//maps/Route5/scripts.pory"
	setobjectxyperm 18, 9, 8
# 9 "data//maps/Route5/scripts.pory"
	setobjectxyperm 19, 8, 8
	end


Route5_SaveGame_Trigger::
# 15 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_COMPLETE, Route5_SaveGame_Trigger_2
# 17 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_SETUP, Route5_SaveGame_Trigger_4
	return

Route5_SaveGame_Trigger_2:
	end

Route5_SaveGame_Trigger_4:
# 18 "data//maps/Route5/scripts.pory"
	setvar VAR_TEMP_E, 1
# 19 "data//maps/Route5/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 20 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_Lynch_Battle_Trigger::
# 26 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_COMPLETE, Route5_Lynch_Battle_Trigger_2
# 28 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_SETUP, Route5_Lynch_Battle_Trigger_4
	return

Route5_Lynch_Battle_Trigger_2:
	end

Route5_Lynch_Battle_Trigger_4:
# 29 "data//maps/Route5/scripts.pory"
	special SpawnCameraObject
# 30 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_Lynch_Battle_Trigger_Movement_0
# 31 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route5_Lynch_Battle_Trigger_Movement_0
# 32 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 33 "data//maps/Route5/scripts.pory"
	special RemoveCameraObject
# 35 "data//maps/Route5/scripts.pory"
	msgbox_delay Route5_Lynch_Battle_Trigger_Text_0, Route5_Lynch_Battle_Trigger_Text_1
# 37 "data//maps/Route5/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_LYNCH, Route5_Lynch_Battle_Trigger_Text_2
# 39 "data//maps/Route5/scripts.pory"
	msgbox_delay Route5_Lynch_Battle_Trigger_Text_0, Route5_Lynch_Battle_Trigger_Text_3
# 43 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_Lynch_Battle_Trigger_Movement_1
# 44 "data//maps/Route5/scripts.pory"
	applymovement 18, Route5_Lynch_Battle_Trigger_Movement_2
# 45 "data//maps/Route5/scripts.pory"
	applymovement 19, Route5_Lynch_Battle_Trigger_Movement_3
# 46 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 48 "data//maps/Route5/scripts.pory"
	removeobject 18
# 49 "data//maps/Route5/scripts.pory"
	removeobject 19
# 56 "data//maps/Route5/scripts.pory"
	setflag FLAG_CHAMPION_LYNCH_COMPLETE
# 58 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_NPC_A::
# 64 "data//maps/Route5/scripts.pory"
	lockall
# 65 "data//maps/Route5/scripts.pory"
	faceplayer
# 66 "data//maps/Route5/scripts.pory"
	msgbox Route5_NPC_A_Text_0
# 67 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_NPC_B::
# 72 "data//maps/Route5/scripts.pory"
	lockall
# 73 "data//maps/Route5/scripts.pory"
	faceplayer
# 74 "data//maps/Route5/scripts.pory"
	msgbox Route5_NPC_B_Text_0
# 75 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_NPC_C::
# 80 "data//maps/Route5/scripts.pory"
	lockall
# 81 "data//maps/Route5/scripts.pory"
	faceplayer
# 82 "data//maps/Route5/scripts.pory"
	msgbox Route5_NPC_C_Text_0
# 83 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_Berger::
# 92 "data//maps/Route5/scripts.pory"
	lockall
# 93 "data//maps/Route5/scripts.pory"
	speakername Route5_Berger_Text_0
# 94 "data//maps/Route5/scripts.pory"
	msgbox Route5_Berger_Text_1
# 95 "data//maps/Route5/scripts.pory"
	faceplayer
# 96 "data//maps/Route5/scripts.pory"
	speakername Route5_Berger_Text_0
# 97 "data//maps/Route5/scripts.pory"
	msgbox Route5_Berger_Text_2
# 98 "data//maps/Route5/scripts.pory"
	release
# 99 "data//maps/Route5/scripts.pory"
	applymovement 16, Route5_Berger_Movement_0
# 100 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 101 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_Bergmite::
# 106 "data//maps/Route5/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 107 "data//maps/Route5/scripts.pory"
	waitmoncry
# 108 "data//maps/Route5/scripts.pory"
	msgbox Route5_Bergmite_Text_0, MSGBOX_NPC
	end


Route5_Greta_Trigger0::
# 116 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger0_2
# 118 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 119 "data//maps/Route5/scripts.pory"
	lockall
# 120 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger0_Movement_0
# 121 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 123 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger0_2:
	end


Route5_Greta_Trigger1::
# 127 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger1_2
# 129 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 130 "data//maps/Route5/scripts.pory"
	lockall
# 131 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger1_Movement_0
# 132 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 134 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger1_2:
	end


Route5_Greta_Main::
# 139 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 140 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_Main_Text_1
# 141 "data//maps/Route5/scripts.pory"
	release
# 142 "data//maps/Route5/scripts.pory"
	delay 20
# 143 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 144 "data//maps/Route5/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 145 "data//maps/Route5/scripts.pory"
	release
# 146 "data//maps/Route5/scripts.pory"
	delay 20
# 148 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return


Route5_Greta_GottaGo::
# 154 "data//maps/Route5/scripts.pory"
	release
# 155 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_0
# 156 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 157 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 158 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_GottaGo_Text_0
# 159 "data//maps/Route5/scripts.pory"
	release
# 160 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_1
# 161 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 162 "data//maps/Route5/scripts.pory"
	removeobject 7
# 163 "data//maps/Route5/scripts.pory"
	setflag FLAG_GRETA_ROUTE5
# 164 "data//maps/Route5/scripts.pory"
	fadedefaultbgm
# 166 "data//maps/Route5/scripts.pory"
	releaseall
	end


# 30 "data//maps/Route5/scripts.pory"
Route5_Lynch_Battle_Trigger_Movement_0:
# 30 "data//maps/Route5/scripts.pory"
	walk_up
	step_end

# 43 "data//maps/Route5/scripts.pory"
Route5_Lynch_Battle_Trigger_Movement_1:
# 43 "data//maps/Route5/scripts.pory"
	walk_down
# 43 "data//maps/Route5/scripts.pory"
	walk_down
# 43 "data//maps/Route5/scripts.pory"
	walk_left
# 43 "data//maps/Route5/scripts.pory"
	walk_left
# 43 "data//maps/Route5/scripts.pory"
	face_right
	step_end

# 44 "data//maps/Route5/scripts.pory"
Route5_Lynch_Battle_Trigger_Movement_2:
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_right
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
# 44 "data//maps/Route5/scripts.pory"
	walk_down
	step_end

# 45 "data//maps/Route5/scripts.pory"
Route5_Lynch_Battle_Trigger_Movement_3:
# 45 "data//maps/Route5/scripts.pory"
	walk_right
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_right
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
# 45 "data//maps/Route5/scripts.pory"
	walk_down
	step_end

# 99 "data//maps/Route5/scripts.pory"
Route5_Berger_Movement_0:
# 99 "data//maps/Route5/scripts.pory"
	face_down
	step_end

# 120 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger0_Movement_0:
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_up
# 120 "data//maps/Route5/scripts.pory"
	face_right
	step_end

# 131 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger1_Movement_0:
# 131 "data//maps/Route5/scripts.pory"
	walk_right
# 131 "data//maps/Route5/scripts.pory"
	walk_right
# 131 "data//maps/Route5/scripts.pory"
	walk_right
# 131 "data//maps/Route5/scripts.pory"
	walk_right
# 131 "data//maps/Route5/scripts.pory"
	walk_right
# 131 "data//maps/Route5/scripts.pory"
	walk_right
# 131 "data//maps/Route5/scripts.pory"
	walk_right
	step_end

# 155 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_0:
# 155 "data//maps/Route5/scripts.pory"
	emote_exclamation_mark
	step_end

# 160 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_1:
# 160 "data//maps/Route5/scripts.pory"
	walk_left
# 160 "data//maps/Route5/scripts.pory"
	walk_left
# 160 "data//maps/Route5/scripts.pory"
	walk_left
# 160 "data//maps/Route5/scripts.pory"
	walk_left
# 160 "data//maps/Route5/scripts.pory"
	walk_left
# 160 "data//maps/Route5/scripts.pory"
	walk_left
# 160 "data//maps/Route5/scripts.pory"
	walk_left
# 160 "data//maps/Route5/scripts.pory"
	walk_left
	step_end

Route5_Lynch_Battle_Trigger_Text_0:
# 35 "data//maps/Route5/scripts.pory"
	.string "Lynch$"

Route5_Lynch_Battle_Trigger_Text_1:
# 35 "data//maps/Route5/scripts.pory"
	.string "My fellow ingredient hunter...and now\n"
	.string "Fifth Cormoria Champion!\p"
	.string "Ravine told me about your duel with him!\n"
	.string "I've never seen him in such a mood - you\l"
	.string "must've really lit him on fire!\p"
	.string "I was never much of a battler, you\n"
	.string "know? I'd always had one foot in the\l"
	.string "kitchen. But my Pokemon and I grew\l"
	.string "stronger and stronger, and we won the\l"
	.string "Championship!\p"
	.string "A great time! The best of my life!\p"
	.string "Sigh...how time flies.\p"
	.string "You'll be old in the blink of an eye too,\n"
	.string "{PLAYER}! But while you're young, why\l"
	.string "don't you light the same fire inside me\l"
	.string "as well?$"

Route5_Lynch_Battle_Trigger_Text_2:
# 37 "data//maps/Route5/scripts.pory"
	.string "Hydrapple! We actually lost!$"

Route5_Lynch_Battle_Trigger_Text_3:
# 39 "data//maps/Route5/scripts.pory"
	.string "Do you know why we all asked you to\n"
	.string "come to such offbeat locations?\p"
	.string "No?\p"
	.string "Imagine the press, the frenzy! Two\n"
	.string "Champions colliding! The entire region\l"
	.string "would descend upon us! And what of the\l"
	.string "property damage? Our Pokemon are far\l"
	.string "too strong to be let loose inside a\l"
	.string "building.\p"
	.string "No, this is much better.\p"
	.string "Out in nature with nobody to disturb us.\n"
	.string "Just the two of us, our partners, and\l"
	.string "all our skills and experience.\p"
	.string "And it really was lovely, don't you\n"
	.string "think?$"

Route5_NPC_A_Text_0:
# 66 "data//maps/Route5/scripts.pory"
	.string "My head is spinning because of the fog\n"
	.string "in Vilethorn Woods! I need some rest.$"

Route5_NPC_B_Text_0:
# 74 "data//maps/Route5/scripts.pory"
	.string "I saw a rough-looking fellow in a dark\n"
	.string "outfit run past me. What's going on?$"

Route5_NPC_C_Text_0:
# 82 "data//maps/Route5/scripts.pory"
	.string "I wish they'd clear those boulders in\n"
	.string "Vilethorn Woods! It's blocking the\l"
	.string "path back to Galecrest City.$"

Route5_Berger_Text_0:
# 93 "data//maps/Route5/scripts.pory"
	.string "Berger$"

Route5_Berger_Text_1:
# 94 "data//maps/Route5/scripts.pory"
	.string "C'mon Bergmite! What's the matter?\n"
	.string "Don't be so scared of Vilethorn Woods!$"

Route5_Berger_Text_2:
# 97 "data//maps/Route5/scripts.pory"
	.string "We're trying to reach Silversun City\n"
	.string "but Bergmite's being a scaredy-cat!$"

Route5_Bergmite_Text_0:
# 108 "data//maps/Route5/scripts.pory"
	.string "Bergmite is shivering!$"

Route5_Greta_Main_Text_0:
# 139 "data//maps/Route5/scripts.pory"
	.string "Greta$"

Route5_Greta_Main_Text_1:
# 140 "data//maps/Route5/scripts.pory"
	.string "It's you! The wandering saviour from Mt.\n"
	.string "Ceram. How wonderful! A new customer.$"

Route5_Greta_GottaGo_Text_0:
# 158 "data//maps/Route5/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "go places. See you around, {PLAYER}!$"
