
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bc290 <.text+0xbb290>:
100bc290:	55                   	push   ebp
100bc291:	8b ec                	mov    ebp,esp
100bc293:	56                   	push   esi
100bc294:	8b f1                	mov    esi,ecx
100bc296:	8b 8e bc 02 00 00    	mov    ecx,DWORD PTR [esi+0x2bc]
100bc29c:	83 f9 07             	cmp    ecx,0x7
100bc29f:	75 24                	jne    0x100bc2c5
100bc2a1:	8b ce                	mov    ecx,esi
100bc2a3:	e8 08 1b 00 00       	call   0x100bddb0
100bc2a8:	85 c0                	test   eax,eax
100bc2aa:	0f 85 2d 01 00 00    	jne    0x100bc3dd
100bc2b0:	68 9c 4e 1d 10       	push   0x101d4e9c
100bc2b5:	6a 02                	push   0x2
100bc2b7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100bc2bd:	83 c4 08             	add    esp,0x8
100bc2c0:	5e                   	pop    esi
100bc2c1:	5d                   	pop    ebp
100bc2c2:	c2 04 00             	ret    0x4
100bc2c5:	8b c1                	mov    eax,ecx
100bc2c7:	03 c0                	add    eax,eax
100bc2c9:	8b 84 c6 44 02 00 00 	mov    eax,DWORD PTR [esi+eax*8+0x244]
100bc2d0:	84 c0                	test   al,al
100bc2d2:	0f 88 dd 00 00 00    	js     0x100bc3b5
100bc2d8:	25 7f fe ff ff       	and    eax,0xfffffe7f
100bc2dd:	83 f8 10             	cmp    eax,0x10
100bc2e0:	75 14                	jne    0x100bc2f6
100bc2e2:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100bc2e5:	8b 01                	mov    eax,DWORD PTR [ecx]
100bc2e7:	ff 90 dc 00 00 00    	call   DWORD PTR [eax+0xdc]
100bc2ed:	8b 8e bc 02 00 00    	mov    ecx,DWORD PTR [esi+0x2bc]
100bc2f3:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
100bc2f6:	c1 e1 04             	shl    ecx,0x4
100bc2f9:	f6 84 31 44 02 00 00 	test   BYTE PTR [ecx+esi*1+0x244],0x20
100bc300:	20 
100bc301:	0f 84 a3 00 00 00    	je     0x100bc3aa
100bc307:	f6 84 31 54 02 00 00 	test   BYTE PTR [ecx+esi*1+0x254],0x20
100bc30e:	20 
100bc30f:	0f 84 95 00 00 00    	je     0x100bc3aa
100bc315:	57                   	push   edi
100bc316:	8d 86 38 02 00 00    	lea    eax,[esi+0x238]
100bc31c:	03 c1                	add    eax,ecx
100bc31e:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100bc323:	56                   	push   esi
100bc324:	50                   	push   eax
100bc325:	e8 06 12 01 00       	call   0x100cd530
100bc32a:	8b 8e bc 02 00 00    	mov    ecx,DWORD PTR [esi+0x2bc]
100bc330:	8b f8                	mov    edi,eax
100bc332:	c1 e1 04             	shl    ecx,0x4
100bc335:	81 c1 48 02 00 00    	add    ecx,0x248
100bc33b:	03 ce                	add    ecx,esi
100bc33d:	56                   	push   esi
100bc33e:	51                   	push   ecx
100bc33f:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100bc344:	e8 e7 11 01 00       	call   0x100cd530
100bc349:	8d 4d 08             	lea    ecx,[ebp+0x8]
100bc34c:	51                   	push   ecx
100bc34d:	50                   	push   eax
100bc34e:	57                   	push   edi
100bc34f:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100bc354:	e8 57 19 01 00       	call   0x100cdcb0
100bc359:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100bc35c:	85 c0                	test   eax,eax
100bc35e:	78 49                	js     0x100bc3a9
100bc360:	8d 14 40             	lea    edx,[eax+eax*2]
100bc363:	a1 c0 38 22 10       	mov    eax,ds:0x102238c0
100bc368:	8b 44 d0 08          	mov    eax,DWORD PTR [eax+edx*8+0x8]
100bc36c:	85 c0                	test   eax,eax
100bc36e:	74 39                	je     0x100bc3a9
100bc370:	6a 00                	push   0x0
100bc372:	ff b6 04 03 00 00    	push   DWORD PTR [esi+0x304]
100bc378:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100bc37d:	50                   	push   eax
100bc37e:	57                   	push   edi
100bc37f:	e8 0c 16 01 00       	call   0x100cd990
100bc384:	85 c0                	test   eax,eax
100bc386:	74 21                	je     0x100bc3a9
100bc388:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100bc38b:	8d 0c 40             	lea    ecx,[eax+eax*2]
100bc38e:	a1 c0 38 22 10       	mov    eax,ds:0x102238c0
100bc393:	8b 44 c8 08          	mov    eax,DWORD PTR [eax+ecx*8+0x8]
100bc397:	85 c0                	test   eax,eax
100bc399:	74 0e                	je     0x100bc3a9
100bc39b:	50                   	push   eax
100bc39c:	8b ce                	mov    ecx,esi
100bc39e:	e8 2d 4e 00 00       	call   0x100c11d0
100bc3a3:	d9 9e 10 02 00 00    	fstp   DWORD PTR [esi+0x210]
100bc3a9:	5f                   	pop    edi
100bc3aa:	ff 86 bc 02 00 00    	inc    DWORD PTR [esi+0x2bc]
100bc3b0:	5e                   	pop    esi
100bc3b1:	5d                   	pop    ebp
100bc3b2:	c2 04 00             	ret    0x4
100bc3b5:	f3 0f 10 86 f0 00 00 	movss  xmm0,DWORD PTR [esi+0xf0]
100bc3bc:	00 
100bc3bd:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
100bc3c2:	0f 5a c0             	cvtps2pd xmm0,xmm0
100bc3c5:	0f 5a c9             	cvtps2pd xmm1,xmm1
100bc3c8:	f2 0f 59 05 10 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e10
100bc3cf:	10 
100bc3d0:	66 0f 2f c1          	comisd xmm0,xmm1
100bc3d4:	76 07                	jbe    0x100bc3dd
100bc3d6:	8b ce                	mov    ecx,esi
100bc3d8:	e8 73 4d 00 00       	call   0x100c1150
100bc3dd:	5e                   	pop    esi
100bc3de:	5d                   	pop    ebp
100bc3df:	c2 04 00             	ret    0x4
