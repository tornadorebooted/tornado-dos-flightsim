vstre0		OBJECTHEADER <OBJ_SCALE2,2000,vstre0_2,0,COL_BLACK1,8,32,5>
		DB	068,048,064	;   0
		DB	068,080,064	;   1
		DB	072,080,064	;   2
		DB	072,048,064	;   3
		DB	068,080,068	;   4
		DB	072,080,068	;   5
		DB	072,048,068	;   6
		DB	068,048,068	;   7
		DB	070,080,070	;   8
		DB	070,048,070	;   9
		DB	078,048,064	;  10
		DB	078,052,064	;  11
		DB	078,052,068	;  12
		DB	078,050,070	;  13
		DB	070,050,070	;  14
		DB	072,052,068	;  15
		DB	072,052,064	;  16
		DB	078,048,068	;  17
		DB	070,042,064	;  18
		DB	070,038,064	;  19
		DB	072,038,064	;  20
		DB	072,016,064	;  21
		DB	076,016,064	;  22
		DB	076,042,064	;  23
		DB	070,042,068	;  24
		DB	076,042,068	;  25
		DB	076,016,068	;  26
		DB	072,016,068	;  27
		DB	072,038,068	;  28
		DB	070,038,068	;  29
		DB	070,040,070	;  30
		DB	074,040,070	;  31
		DB	074,016,070	;  32
		DB	068,088,064	;  33
		DB	068,096,064	;  34
		DB	072,096,064	;  35
		DB	072,104,064	;  36
		DB	072,106,064	;  37
		DB	072,114,064	;  38
		DB	068,114,064	;  39
		DB	068,122,064	;  40
		DB	080,122,064	;  41
		DB	080,088,064	;  42
		DB	068,122,070	;  43
		DB	080,122,070	;  44
		DB	080,088,070	;  45
		DB	068,088,070	;  46
		DB	068,096,070	;  47
		DB	072,096,070	;  48
		DB	072,104,066	;  49
		DB	072,106,066	;  50
		DB	072,114,070	;  51
		DB	068,114,070	;  52
		DB	068,118,074	;  53
		DB	076,118,074	;  54
		DB	076,092,074	;  55
		DB	068,092,074	;  56
		DB	080,114,070	;  57
		DB	080,096,070	;  58
		DB	080,118,074	;  59
		DB	080,092,074	;  60
		DB	066,122,064	;  61
		DB	066,002,064	;  62
		DB	072,122,064	;  63
		DB	072,002,064	;  64
		DB	066,128,064	;  65
		DB	062,128,064	;  66
		DB	062,000,064	;  67
		DB	066,000,064	;  68
		DB	066,064,064	;  69
		DB	066,064,068	;  70
		DB	062,032,068	;  71
		DB	062,032,064	;  72
		DB	062,096,064	;  73
		DB	062,096,068	;  74
		DB	-1

		DW	OFFSET	vstre0_1

		EVEN

vstre0_1	DW	404

vstregpln_L	DB	046h		; GOSUB
		DW	OFFSET vstregpln-$-2
vstrehs_rd	DB	028h,00,80,106,-1
		DW	OFFSET vstrebk_md-$-2	; 
		DW	OFFSET vstrerd_L-$-2	; 
		DB	-1

vstrebk_md	DB	028h,92,90,84,-1
		DW	OFFSET vstrebk-$-2	; 
		DW	OFFSET vstremd_ft-$-2	; 
		DB	-1

vstremd_ft	DB	028h,20,00,18,-1
		DW	OFFSET vstremd-$-2	; 
		DW	OFFSET vstreft-$-2	; 
		DB	-1

vstrerd_L	DB	046h		; GOSUB
		DW	OFFSET vstrerd-$-2
		DB	040h,001h		; IF_lton_vstre
		DW	OFFSET vstrerd_b-$-2	; to ENDIF
		DW	OFFSET lton_vstre-$-2	; to THEN


vstregpln	LABEL	BYTE
		DB	008h,COL_GREY3,124,122,126,128,-1	; face 67
		DB	-1

vstrebk		LABEL	BYTE
		DB	008h,COL_GREY1,104,102,76,78,-1		; face 41
		DB	008h,COL_CYAN_GREY4,106,118,114,104,-1	; face 63
		DB	008h,COL_GREY1,96,94,68,70,-1		; face 42
		DB	008h,COL_CYAN_GREY4,116,120,112,94,-1	; face 62
		DB	008h,COL_NEW_GREY1,102,96,70,76,-1	; face 39
		DB	000h,6,COL_CYAN_GREY6,98,72,74,100,-1	; face 40
		DB	008h,COL_CYAN_GREY5,102,108,110,96,-1	; face 48
		DB	008h,COL_GREY1,92,90,84,66,-1		; face 43
		DB	008h,COL_GREY1,88,86,80,82,-1		; face 44
		DB	008h,COL_NEW_GREY1,92,66,68,94,112,-1	; face 45
		DB	002h,7,COL_CYAN_GREY6,94,92,66,68,94,-1	; line 59
		DB	008h,COL_NEW_GREY1,104,78,80,86,106,-1	; face 46
		DB	002h,7,COL_CYAN_GREY6,86,104,78,80,86,-1	; line 58
		DB	008h,COL_NEW_GREY1,90,88,82,84,-1	; face 47
		DB	002h,6,COL_CYAN_GREY6,84,90,88,82,-1	; line 60
		DB	008h,COL_CYAN_GREY5,116,110,108,114,-1	; face 51
		DB	008h,COL_CYAN_GREY4,92,112,120,90,-1	; face 54
		DB	008h,COL_NEW_GREY1,90,120,116,-1	; face 56
		DB	008h,COL_NEW_GREY1,114,118,88,-1	; face 57
		DB	008h,COL_CYAN_GREY4,88,118,106,86,-1	; face 55
		DB	-1

vstremd		LABEL	BYTE
		DB	008h,COL_RUST3,30,10,04,32,-1		; face 5
		DB	008h,COL_CYAN_GREY5,10,12,18,16,-1	; face 61
		DB	008h,COL_CYAN_GREY4,30,24,26,28,-1	; face 10
		DB	008h,COL_RUST2,30,32,22,24,-1		; face 11
		DB	008h,COL_CYAN_GREY4,28,26,34,12,-1	; face 9
		DB	008h,COL_RUST2,12,06,00,14,18,-1	; face 5
		DB	008h,COL_RUST2,12,34,20,06,-1		; face 8
		DB	008h,COL_RUST3,08,14,00,02,-1		; face 3
		DB	008h,COL_CYAN_GREY5,16,18,14,08,-1	; face 4
		DB	008h,COL_RUST2,08,02,04,10,16,-1	; face 6
		DB	008h,COL_RUST3,24,22,20,34,26,-1	; face 22
		DB	-1

vstreft		LABEL	BYTE
		DB	008h,COL_GREY1,58,56,40,38,-1		; face 12
		DB	008h,COL_NEW_GREY1,56,54,42,40,-1	; face 15
		DB	008h,COL_CYAN_GREY5,62,64,54,56,-1	; face 18
		DB	008h,COL_CYAN_GREY4,56,58,60,62,-1	; face 19
		DB	008h,COL_GREY1,52,44,42,54,64,-1	; face 13
		DB	008h,COL_GREY1,50,48,36,46,-1		; face 14
		DB	008h,COL_NEW_GREY1,58,38,36,48,60,-1	; face 16
		DB	008h,COL_NEW_GREY1,52,50,46,44,-1	; face 17
		DB	008h,COL_CYAN_GREY4,62,60,48,50,-1	; face 20
		DB	008h,COL_CYAN_GREY5,50,52,64,62,-1	; face 21
		DB	-1

vstrerd		LABEL	BYTE
		DB	008h,COL_ROAD1,130,136,134,132,-1	; face 51
		DB	002h,4,COL_CYAN_GREY3,146,148,-1	; line 52
		DB	002h,4,COL_CYAN_GREY3,138,140,-1	; line 53
		DB	002h,4,COL_CYAN_GREY3,144,142,-1	; line 54
		DB	-1

lton_vstre	LABEL	BYTE
		DB	00Eh,COL_NT_YELLOW1,COL_NT_YELLOW1,142,142,-1	; line 52
		DB	00Eh,COL_NT_YELLOW1,COL_NT_YELLOW1,140,140,-1	; line 53
		DB	00Eh,COL_NT_YELLOW1,COL_NT_YELLOW1,148,148,-1	; line 54
		DB	-1

vstrerd_b	LABEL	BYTE
		DB	-1

		EVEN

vstre0_2	OBJECTHEADER <OBJ_SCALE1,16384,-1,1,COL_BLACK1,4,16,2>
		DB	066,056,064	;   0
		DB	066,072,064	;   1
		DB	068,072,064	;   2
		DB	066,072,066	;   3
		DB	068,072,066	;   4
		DB	066,056,066	;   5
		DB	072,056,064	;   6
		DB	072,058,064	;   7
		DB	072,058,066	;   8
		DB	068,058,066	;   9
		DB	068,058,064	;  10
		DB	072,056,066	;  11
		DB	068,056,064	;  12
		DB	068,040,064	;  13
		DB	070,040,064	;  14
		DB	070,056,064	;  15
		DB	068,056,066	;  16
		DB	070,056,066	;  17
		DB	070,040,066	;  18
		DB	068,040,066	;  19
		DB	066,076,064	;  20
		DB	066,080,064	;  21
		DB	068,080,064	;  22
		DB	068,088,064	;  23
		DB	066,088,064	;  24
		DB	066,092,064	;  25
		DB	072,092,064	;  26
		DB	072,076,064	;  27
		DB	066,092,066	;  28
		DB	072,092,066	;  29
		DB	072,076,066	;  30
		DB	066,076,066	;  31
		DB	066,080,066	;  32
		DB	068,080,066	;  33
		DB	068,088,066	;  34
		DB	066,088,066	;  35
		DB	066,090,068	;  36
		DB	070,090,068	;  37
		DB	070,078,068	;  38
		DB	066,078,068	;  39
		DB	072,088,066	;  40
		DB	072,080,066	;  41
		DB	072,090,068	;  42
		DB	072,078,068	;  43
		DB	064,034,064	;  44
		DB	068,092,064	;  45
		DB	068,034,064	;  46
		DB	064,096,064	;  47
		DB	064,032,064	;  48
		DB	064,092,064	;  49
		DB	064,064,066	;  50
		DB	064,080,066	;  51
		DB	064,048,066	;  52
		DB	-1

		DW	OFFSET	vstre0_2_1

		EVEN

vstre0_2_1	DW	295

vstre2gpl_L	DB	046h		; GOSUB
		DW	OFFSET vstre2gpl-$-2
vstre2hs_rd	DB	028h,00,50,72,-1
		DW	OFFSET vstre2bk_md-$-2	; 
		DW	OFFSET vstre2rd_L-$-2	; 
		DB	-1

vstre2bk_md	DB	028h,62,60,54,-1
		DW	OFFSET vstre2bk-$-2	; 
		DW	OFFSET vstre2md-$-2	; 
		DB	-1

vstre2rd_L	DB	046h		; GOSUB
		DW	OFFSET vstre2rd-$-2
		DB	040h,001h		; IF_lton_vstre2
		DW	OFFSET vstre2rd_b-$-2	; to ENDIF
		DW	OFFSET lton_vstre2-$-2	; to THEN


vstre2gpl	LABEL	BYTE
		DB	008h,COL_GREY3,90,92,88,98,-1		; face 43
		DB	-1

vstre2bk	LABEL	BYTE
		DB	008h,COL_GREY1,70,68,46,48,-1		; face 41
		DB	008h,COL_CYAN_GREY4,72,84,80,70,-1	; face 47
		DB	008h,COL_GREY1,66,64,42,44,-1		; face 42
		DB	008h,COL_CYAN_GREY4,64,82,86,78,-1	; face 46
		DB	008h,COL_NEW_GREY1,68,66,44,46,-1	; face 39
		DB	008h,COL_CYAN_GREY5,68,74,76,66,-1	; face 48
		DB	008h,COL_GREY1,62,60,54,40,-1		; face 43
		DB	008h,COL_GREY1,58,56,50,52,-1		; face 44
		DB	008h,COL_NEW_GREY1,62,40,42,64,78,-1	; face 45
		DB	002h,7,COL_CYAN_GREY6,64,62,40,42,64,-1	; line 59
		DB	008h,COL_NEW_GREY1,70,48,50,56,72,-1	; face 46
		DB	002h,7,COL_CYAN_GREY6,56,70,48,50,56,-1	; line 58
		DB	008h,COL_NEW_GREY1,60,58,52,54,-1	; face 47
		DB	002h,6,COL_CYAN_GREY6,54,60,58,52,-1	; line 60
		DB	008h,COL_CYAN_GREY5,82,76,74,80,-1	; face 51
		DB	008h,COL_CYAN_GREY4,62,78,86,60,-1	; face 54
		DB	008h,COL_NEW_GREY1,60,86,82,-1		; face 56
		DB	008h,COL_NEW_GREY1,80,84,58,-1		; face 57
		DB	008h,COL_CYAN_GREY4,58,84,72,56,-1	; face 55
		DB	-1

vstre2md	LABEL	BYTE
		DB	008h,COL_RUST3,18,08,04,20,-1		; face 5
		DB	008h,COL_RUST2,10,22,12,00,-1		; face 44
		DB	008h,COL_NEW_GREY1,26,24,32,38,-1	; face 46
		DB	008h,COL_NEW_GREY1,36,34,30,28,-1	; face 17
		DB	008h,COL_RUST2,18,20,14,16,-1		; face 11
		DB	008h,COL_CYAN_GREY5,10,06,08,18,-1	; face 43
		DB	008h,COL_CYAN_GREY4,18,16,22,10,-1	; face 44
		DB	008h,COL_RUST3,06,10,00,02,-1		; face 3
		DB	008h,COL_RUST2,06,02,04,08,-1		; face 6
		DB	008h,COL_RUST3,16,14,12,22,-1		; face 22
		DB	008h,COL_CYAN_GREY5,34,36,38,32,-1	; face 18
		DB	008h,COL_GREY1,36,28,26,38,-1		; face 13
		DB	-1

vstre2rd	LABEL	BYTE
		DB	00Ah,COL_ROAD1,94,96,-1			; line 42
		DB	-1

lton_vstre2	LABEL	BYTE
		DB	00Eh,COL_NT_YELLOW1,COL_NT_YELLOW1,100,100,-1	; light1
		DB	00Eh,COL_NT_YELLOW1,COL_NT_YELLOW1,104,104,-1	; light2
		DB	00Eh,COL_NT_YELLOW1,COL_NT_YELLOW1,102,102,-1	; light3
		DB	-1

vstre2rd_b	LABEL	BYTE
		DB	-1

		EVEN

