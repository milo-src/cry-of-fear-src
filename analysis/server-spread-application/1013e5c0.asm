
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1013e5c0 <.text+0x13d5c0>:
1013e5c0:	83 3d ec 28 23 10 06 	cmp    DWORD PTR ds:0x102328ec,0x6
1013e5c7:	7c 07                	jl     0x1013e5d0
1013e5c9:	62 f1 7e 08 78 c0    	vcvttss2usi eax,xmm0
1013e5cf:	c3                   	ret
1013e5d0:	66 0f 7e c0          	movd   eax,xmm0
1013e5d4:	d1 e0                	shl    eax,1
1013e5d6:	72 1b                	jb     0x1013e5f3
1013e5d8:	3d 00 00 00 9e       	cmp    eax,0x9e000000
1013e5dd:	73 05                	jae    0x1013e5e4
1013e5df:	f3 0f 2c c0          	cvttss2si eax,xmm0
1013e5e3:	c3                   	ret
1013e5e4:	3d 00 00 00 9f       	cmp    eax,0x9f000000
1013e5e9:	73 0f                	jae    0x1013e5fa
1013e5eb:	c1 e0 07             	shl    eax,0x7
1013e5ee:	0f ba e8 1f          	bts    eax,0x1f
1013e5f2:	c3                   	ret
1013e5f3:	3d 00 00 00 7f       	cmp    eax,0x7f000000
1013e5f8:	72 e5                	jb     0x1013e5df
1013e5fa:	f3 0f 2c 0d 60 b5 1e 	cvttss2si ecx,DWORD PTR ds:0x101eb560
1013e601:	10 
1013e602:	f5                   	cmc
1013e603:	1b c0                	sbb    eax,eax
1013e605:	c3                   	ret
