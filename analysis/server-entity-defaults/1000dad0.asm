
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000dad0 <.text+0xcad0>:
1000dad0:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1000dad3:	83 b8 74 01 00 00 00 	cmp    DWORD PTR [eax+0x174],0x0
1000dada:	75 17                	jne    0x1000daf3
1000dadc:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
1000dae3:	00 
1000dae4:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
1000daeb:	76 06                	jbe    0x1000daf3
1000daed:	b8 01 00 00 00       	mov    eax,0x1
1000daf2:	c3                   	ret
1000daf3:	33 c0                	xor    eax,eax
1000daf5:	c3                   	ret
