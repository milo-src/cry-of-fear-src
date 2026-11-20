
D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/client.dll:     file format pei-i386


Disassembly of section .text:

100362b0 <.text+0x352b0>:
100362b0:	55                   	push   ebp
100362b1:	8b ec                	mov    ebp,esp
100362b3:	6a ff                	push   0xffffffff
100362b5:	68 7b 37 13 10       	push   0x1013377b
100362ba:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100362c0:	50                   	push   eax
100362c1:	83 ec 24             	sub    esp,0x24
100362c4:	53                   	push   ebx
100362c5:	56                   	push   esi
100362c6:	57                   	push   edi
100362c7:	a1 00 06 19 10       	mov    eax,ds:0x10190600
100362cc:	33 c5                	xor    eax,ebp
100362ce:	50                   	push   eax
100362cf:	8d 45 f4             	lea    eax,[ebp-0xc]
100362d2:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100362d8:	8b d9                	mov    ebx,ecx
100362da:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
100362dd:	ff 35 34 f4 18 10    	push   DWORD PTR ds:0x1018f434
100362e3:	ff 35 30 f4 18 10    	push   DWORD PTR ds:0x1018f430
100362e9:	6a 00                	push   0x0
100362eb:	6a 00                	push   0x0
100362ed:	e8 72 d1 07 00       	call   0x100b3464
100362f2:	68 c0 00 00 00       	push   0xc0
100362f7:	c7 03 cc 52 14 10    	mov    DWORD PTR [ebx],0x101452cc
100362fd:	e8 c9 e1 07 00       	call   0x100b44cb
10036302:	8b f0                	mov    esi,eax
10036304:	83 c4 04             	add    esp,0x4
10036307:	89 75 ec             	mov    DWORD PTR [ebp-0x14],esi
1003630a:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10036311:	85 f6                	test   esi,esi
10036313:	74 19                	je     0x1003632e
10036315:	68 d4 62 14 10       	push   0x101462d4
1003631a:	e8 21 23 fd ff       	call   0x10008640
1003631f:	83                   	.byte 0x83
