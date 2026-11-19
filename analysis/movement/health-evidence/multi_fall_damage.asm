
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c8800 <.text+0xc7800>:
100c8800:	55                   	push   ebp
100c8801:	8b ec                	mov    ebp,esp
100c8803:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c8806:	f3 0f 10 80 c4 22 00 	movss  xmm0,DWORD PTR [eax+0x22c4]
100c880d:	00 
100c880e:	f3 0f 5c 05 38 1f 1a 	subss  xmm0,DWORD PTR ds:0x101a1f38
100c8815:	10 
100c8816:	f3 0f 11 80 c4 22 00 	movss  DWORD PTR [eax+0x22c4],xmm0
100c881d:	00 
100c881e:	f3 0f 59 05 1c 1f 1a 	mulss  xmm0,DWORD PTR ds:0x101a1f1c
100c8825:	10 
100c8826:	f3 0f 5e 05 18 66 1d 	divss  xmm0,DWORD PTR ds:0x101d6618
100c882d:	10 
100c882e:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
100c8833:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
100c8836:	5d                   	pop    ebp
100c8837:	c2 04 00             	ret    0x4
