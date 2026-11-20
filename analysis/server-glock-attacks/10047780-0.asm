
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047780 <.text+0x46780>:
10047780:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047785:	ba fc 06 1b 10       	mov    edx,0x101b06fc
1004778a:	56                   	push   esi
1004778b:	8b f1                	mov    esi,ecx
1004778d:	2b 90 98 00 00 00    	sub    edx,DWORD PTR [eax+0x98]
10047793:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10047796:	89 10                	mov    DWORD PTR [eax],edx
10047798:	8b 06                	mov    eax,DWORD PTR [esi]
1004779a:	ff 50 30             	call   DWORD PTR [eax+0x30]
1004779d:	8b 8e 70 01 00 00    	mov    ecx,DWORD PTR [esi+0x170]
100477a3:	85 c9                	test   ecx,ecx
100477a5:	74 10                	je     0x100477b7
100477a7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100477ac:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100477b2:	03 c1                	add    eax,ecx
100477b4:	50                   	push   eax
100477b5:	eb 05                	jmp    0x100477bc
100477b7:	68 0c 07 1b 10       	push   0x101b070c
100477bc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100477bf:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100477c5:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
100477cb:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100477ce:	83 c4 08             	add    esp,0x8
100477d1:	c7 86 68 01 00 00 03 	mov    DWORD PTR [esi+0x168],0x3
100477d8:	00 00 00 
100477db:	c7 86 58 01 00 00 0c 	mov    DWORD PTR [esi+0x158],0xc
100477e2:	00 00 00 
100477e5:	c7 86 5c 01 00 00 0d 	mov    DWORD PTR [esi+0x15c],0xd
100477ec:	00 00 00 
100477ef:	c7 86 98 01 00 00 00 	mov    DWORD PTR [esi+0x198],0x3fa00000
100477f6:	00 a0 3f 
100477f9:	f3 0f 10 82 68 01 00 	movss  xmm0,DWORD PTR [edx+0x168]
10047800:	00 
10047801:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
10047808:	76 06                	jbe    0x10047810
1004780a:	f3 0f 2c c0          	cvttss2si eax,xmm0
1004780e:	eb 1c                	jmp    0x1004782c
10047810:	0f 2e 05 60 1f 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1f60
10047817:	9f                   	lahf
10047818:	f6 c4 44             	test   ah,0x44
1004781b:	7a 0a                	jp     0x10047827
1004781d:	c7 86 e4 01 00 00 66 	mov    DWORD PTR [esi+0x1e4],0xfffffd66
10047824:	fd ff ff 
10047827:	b8 0f 00 00 00       	mov    eax,0xf
1004782c:	89 86 f4 01 00 00    	mov    DWORD PTR [esi+0x1f4],eax
10047832:	83 be 10 01 00 00 00 	cmp    DWORD PTR [esi+0x110],0x0
10047839:	c6 86 07 01 00 00 01 	mov    BYTE PTR [esi+0x107],0x1
10047840:	75 26                	jne    0x10047868
10047842:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10047846:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
1004784d:	00 00 00 
10047850:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047855:	b9 30 07 1b 10       	mov    ecx,0x101b0730
1004785a:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10047860:	89 8e 10 01 00 00    	mov    DWORD PTR [esi+0x110],ecx
10047866:	74 e8                	je     0x10047850
10047868:	8b 86 74 01 00 00    	mov    eax,DWORD PTR [esi+0x174]
1004786e:	85 c0                	test   eax,eax
10047870:	74 06                	je     0x10047878
10047872:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
10047878:	c7 82 60 01 00 00 63 	mov    DWORD PTR [edx+0x160],0x63
1004787f:	00 00 00 
10047882:	b9 0c 07 1b 10       	mov    ecx,0x101b070c
10047887:	c6 86 3c 01 00 00 01 	mov    BYTE PTR [esi+0x13c],0x1
1004788e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047893:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10047899:	89 8e 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],ecx
1004789f:	8b ce                	mov    ecx,esi
100478a1:	5e                   	pop    esi
100478a2:	e9 a9 58 0d 00       	jmp    0x1011d150
