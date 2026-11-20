
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f39e0 <.text+0xf29e0>:
100f39e0:	55                   	push   ebp
100f39e1:	8b ec                	mov    ebp,esp
100f39e3:	83 ec 14             	sub    esp,0x14
100f39e6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100f39eb:	33 c5                	xor    eax,ebp
100f39ed:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100f39f0:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100f39f3:	56                   	push   esi
100f39f4:	8b f1                	mov    esi,ecx
100f39f6:	8d 4d ec             	lea    ecx,[ebp-0x14]
100f39f9:	6a 0a                	push   0xa
100f39fb:	51                   	push   ecx
100f39fc:	50                   	push   eax
100f39fd:	89 86 34 23 00 00    	mov    DWORD PTR [esi+0x2334],eax
100f3a03:	e8 80 8a 08 00       	call   0x1017c488
100f3a08:	8d 45 ec             	lea    eax,[ebp-0x14]
100f3a0b:	50                   	push   eax
100f3a0c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f3a0f:	68 78 1d 1a 10       	push   0x101a1d78
100f3a14:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f3a1a:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f3a20:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100f3a23:	83 c4 18             	add    esp,0x18
100f3a26:	33 cd                	xor    ecx,ebp
100f3a28:	5e                   	pop    esi
100f3a29:	e8 85 a1 04 00       	call   0x1013dbb3
100f3a2e:	8b e5                	mov    esp,ebp
100f3a30:	5d                   	pop    ebp
100f3a31:	c2 04 00             	ret    0x4
