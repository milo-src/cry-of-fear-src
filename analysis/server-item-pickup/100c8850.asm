
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c8850 <.text+0xc7850>:
100c8850:	55                   	push   ebp
100c8851:	8b ec                	mov    ebp,esp
100c8853:	f3 0f 10 05 6c 46 21 	movss  xmm0,DWORD PTR ds:0x1021466c
100c885a:	10 
100c885b:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
100c8862:	76 24                	jbe    0x100c8888
100c8864:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c8867:	6b 80 68 01 00 00 2c 	imul   eax,DWORD PTR [eax+0x168],0x2c
100c886e:	f6 80 ac 18 23 10 08 	test   BYTE PTR [eax+0x102318ac],0x8
100c8875:	75 11                	jne    0x100c8888
100c8877:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c887c:	d9 00                	fld    DWORD PTR [eax]
100c887e:	d8 05 70 13 1a 10    	fadd   DWORD PTR ds:0x101a1370
100c8884:	5d                   	pop    ebp
100c8885:	c2 04 00             	ret    0x4
100c8888:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c888d:	d9 00                	fld    DWORD PTR [eax]
100c888f:	d8 05 ec 1e 1a 10    	fadd   DWORD PTR ds:0x101a1eec
100c8895:	5d                   	pop    ebp
100c8896:	c2 04 00             	ret    0x4
