
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101180b0 <.text+0x1170b0>:
101180b0:	55                   	push   ebp
101180b1:	8b ec                	mov    ebp,esp
101180b3:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
101180b6:	85 c9                	test   ecx,ecx
101180b8:	0f 88 2b 01 00 00    	js     0x101181e9
101180be:	56                   	push   esi
101180bf:	8b 34 cd 44 b9 21 10 	mov    esi,DWORD PTR [ecx*8+0x1021b944]
101180c6:	85 f6                	test   esi,esi
101180c8:	0f 88 1a 01 00 00    	js     0x101181e8
101180ce:	57                   	push   edi
101180cf:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
101180d2:	f3 0f 10 47 10       	movss  xmm0,DWORD PTR [edi+0x10]
101180d7:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
101180de:	9f                   	lahf
101180df:	f6 c4 44             	test   ah,0x44
101180e2:	0f 8b ff 00 00 00    	jnp    0x101181e7
101180e8:	83 f9 0b             	cmp    ecx,0xb
101180eb:	74 05                	je     0x101180f2
101180ed:	83 f9 0c             	cmp    ecx,0xc
101180f0:	75 10                	jne    0x10118102
101180f2:	6a 00                	push   0x0
101180f4:	68 3c 58 1e 10       	push   0x101e583c
101180f9:	57                   	push   edi
101180fa:	e8 e1 fe ff ff       	call   0x10117fe0
101180ff:	83 c4 0c             	add    esp,0xc
10118102:	8b 47 30             	mov    eax,DWORD PTR [edi+0x30]
10118105:	53                   	push   ebx
10118106:	85 c0                	test   eax,eax
10118108:	74 4e                	je     0x10118158
1011810a:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
1011810d:	85 c9                	test   ecx,ecx
1011810f:	74 10                	je     0x10118121
10118111:	8b 01                	mov    eax,DWORD PTR [ecx]
10118113:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10118119:	85 c0                	test   eax,eax
1011811b:	0f 84 c5 00 00 00    	je     0x101181e6
10118121:	ff 77 30             	push   DWORD PTR [edi+0x30]
10118124:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1011812a:	0f b7 d8             	movzx  ebx,ax
1011812d:	83 c4 04             	add    esp,0x4
10118130:	66 85 db             	test   bx,bx
10118133:	74 25                	je     0x1011815a
10118135:	81 fe ff 00 00 00    	cmp    esi,0xff
1011813b:	b8 76 00 00 00       	mov    eax,0x76
10118140:	b9 68 00 00 00       	mov    ecx,0x68
10118145:	0f 4e c1             	cmovle eax,ecx
10118148:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
1011814b:	8d 86 00 ff ff ff    	lea    eax,[esi-0x100]
10118151:	0f 4e c6             	cmovle eax,esi
10118154:	8b f0                	mov    esi,eax
10118156:	eb 1e                	jmp    0x10118176
10118158:	33 db                	xor    ebx,ebx
1011815a:	c7 45 0c 74 00 00 00 	mov    DWORD PTR [ebp+0xc],0x74
10118161:	81 fe ff 00 00 00    	cmp    esi,0xff
10118167:	7e 0d                	jle    0x10118176
10118169:	c7 45 0c 75 00 00 00 	mov    DWORD PTR [ebp+0xc],0x75
10118170:	81 ee 00 01 00 00    	sub    esi,0x100
10118176:	6a 00                	push   0x0
10118178:	6a 00                	push   0x0
1011817a:	6a 17                	push   0x17
1011817c:	6a 00                	push   0x0
1011817e:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10118184:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10118187:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011818d:	f3 0f 10 47 14       	movss  xmm0,DWORD PTR [edi+0x14]
10118192:	83 c4 10             	add    esp,0x10
10118195:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011819a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
101181a0:	f3 0f 10 47 18       	movss  xmm0,DWORD PTR [edi+0x18]
101181a5:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
101181aa:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
101181b0:	f3 0f 10 47 1c       	movss  xmm0,DWORD PTR [edi+0x1c]
101181b5:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
101181ba:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
101181c0:	56                   	push   esi
101181c1:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
101181c7:	83 c4 08             	add    esp,0x8
101181ca:	66 85 db             	test   bx,bx
101181cd:	74 0d                	je     0x101181dc
101181cf:	0f bf c3             	movsx  eax,bx
101181d2:	50                   	push   eax
101181d3:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
101181d9:	83 c4 04             	add    esp,0x4
101181dc:	5b                   	pop    ebx
101181dd:	5f                   	pop    edi
101181de:	5e                   	pop    esi
101181df:	5d                   	pop    ebp
101181e0:	ff 25 04 30 22 10    	jmp    DWORD PTR ds:0x10223004
101181e6:	5b                   	pop    ebx
101181e7:	5f                   	pop    edi
101181e8:	5e                   	pop    esi
101181e9:	5d                   	pop    ebp
101181ea:	c3                   	ret
