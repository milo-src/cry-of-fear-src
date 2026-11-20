
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117180 <.text+0x116180>:
10117180:	55                   	push   ebp
10117181:	8b ec                	mov    ebp,esp
10117183:	57                   	push   edi
10117184:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10117187:	8b c7                	mov    eax,edi
10117189:	85 ff                	test   edi,edi
1011718b:	75 0e                	jne    0x1011719b
1011718d:	57                   	push   edi
1011718e:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
10117194:	83 c4 04             	add    esp,0x4
10117197:	85 c0                	test   eax,eax
10117199:	74 69                	je     0x10117204
1011719b:	56                   	push   esi
1011719c:	8b 70 7c             	mov    esi,DWORD PTR [eax+0x7c]
1011719f:	85 f6                	test   esi,esi
101171a1:	74 60                	je     0x10117203
101171a3:	8b 06                	mov    eax,DWORD PTR [esi]
101171a5:	8b ce                	mov    ecx,esi
101171a7:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
101171ad:	85 c0                	test   eax,eax
101171af:	74 52                	je     0x10117203
101171b1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
101171b4:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
101171ba:	6a 00                	push   0x0
101171bc:	ff 35 18 66 22 10    	push   DWORD PTR ds:0x10226618
101171c2:	6a 01                	push   0x1
101171c4:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
101171ca:	6a ff                	push   0xffffffff
101171cc:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
101171d2:	6a ff                	push   0xffffffff
101171d4:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
101171da:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
101171e0:	ff 76 04             	push   DWORD PTR [esi+0x4]
101171e3:	e8 f8 b3 ef ff       	call   0x100125e0
101171e8:	8b f0                	mov    esi,eax
101171ea:	83 c4 1c             	add    esp,0x1c
101171ed:	85 f6                	test   esi,esi
101171ef:	74 12                	je     0x10117203
101171f1:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
101171f4:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
101171fa:	83 c4 04             	add    esp,0x4
101171fd:	89 86 38 20 00 00    	mov    DWORD PTR [esi+0x2038],eax
10117203:	5e                   	pop    esi
10117204:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10117207:	57                   	push   edi
10117208:	ff 15 b8 30 22 10    	call   DWORD PTR ds:0x102230b8
1011720e:	83 c4 08             	add    esp,0x8
10117211:	5f                   	pop    edi
10117212:	5d                   	pop    ebp
10117213:	c3                   	ret
