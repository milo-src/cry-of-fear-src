
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100af710 <.text+0xae710>:
100af710:	55                   	push   ebp
100af711:	8b ec                	mov    ebp,esp
100af713:	6a ff                	push   0xffffffff
100af715:	68 e9 dc 19 10       	push   0x1019dce9
100af71a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100af720:	50                   	push   eax
100af721:	51                   	push   ecx
100af722:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100af727:	33 c5                	xor    eax,ebp
100af729:	50                   	push   eax
100af72a:	8d 45 f4             	lea    eax,[ebp-0xc]
100af72d:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100af733:	68 1c e2 1c 10       	push   0x101ce21c
100af738:	ff 15 e4 2f 22 10    	call   DWORD PTR ds:0x10222fe4
100af73e:	83 c4 04             	add    esp,0x4
100af741:	ff 15 e8 2f 22 10    	call   DWORD PTR ds:0x10222fe8
100af747:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100af74c:	f3 0f 10 40 14       	movss  xmm0,DWORD PTR [eax+0x14]
100af751:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100af758:	c7 05 e8 2e 22 10 00 	mov    DWORD PTR ds:0x10222ee8,0x0
100af75f:	00 00 00 
100af762:	9f                   	lahf
100af763:	f6 c4 44             	test   ah,0x44
100af766:	7a 31                	jp     0x100af799
100af768:	68 e8 00 00 00       	push   0xe8
100af76d:	e8 77 ea 08 00       	call   0x1013e1e9
100af772:	83 c4 04             	add    esp,0x4
100af775:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100af778:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100af77f:	85 c0                	test   eax,eax
100af781:	74 47                	je     0x100af7ca
100af783:	8b c8                	mov    ecx,eax
100af785:	e8 66 c9 04 00       	call   0x100fc0f0
100af78a:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100af78d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100af794:	59                   	pop    ecx
100af795:	8b e5                	mov    esp,ebp
100af797:	5d                   	pop    ebp
100af798:	c3                   	ret
100af799:	68 e4 00 00 00       	push   0xe4
100af79e:	e8 46 ea 08 00       	call   0x1013e1e9
100af7a3:	83 c4 04             	add    esp,0x4
100af7a6:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100af7a9:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
100af7b0:	85 c0                	test   eax,eax
100af7b2:	74 16                	je     0x100af7ca
100af7b4:	8b c8                	mov    ecx,eax
100af7b6:	e8 c5 59 01 00       	call   0x100c5180
100af7bb:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100af7be:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100af7c5:	59                   	pop    ecx
100af7c6:	8b e5                	mov    esp,ebp
100af7c8:	5d                   	pop    ebp
100af7c9:	c3                   	ret
100af7ca:	33 c0                	xor    eax,eax
100af7cc:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100af7cf:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100af7d6:	59                   	pop    ecx
100af7d7:	8b e5                	mov    esp,ebp
100af7d9:	5d                   	pop    ebp
100af7da:	c3                   	ret
