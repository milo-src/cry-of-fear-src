
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008a330 <.text+0x89330>:
1008a330:	55                   	push   ebp
1008a331:	8b ec                	mov    ebp,esp
1008a333:	56                   	push   esi
1008a334:	8b f1                	mov    esi,ecx
1008a336:	8b 86 ec 02 00 00    	mov    eax,DWORD PTR [esi+0x2ec]
1008a33c:	84 c0                	test   al,al
1008a33e:	79 1c                	jns    0x1008a35c
1008a340:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1008a343:	e8 28 09 00 00       	call   0x1008ac70
1008a348:	85 c0                	test   eax,eax
1008a34a:	0f 84 e1 00 00 00    	je     0x1008a431
1008a350:	8b ce                	mov    ecx,esi
1008a352:	e8 e9 d5 ff ff       	call   0x10087940
1008a357:	5e                   	pop    esi
1008a358:	5d                   	pop    ebp
1008a359:	c2 08 00             	ret    0x8
1008a35c:	6a 64                	push   0x64
1008a35e:	6a 00                	push   0x0
1008a360:	83 ec 08             	sub    esp,0x8
1008a363:	0d 80 00 00 00       	or     eax,0x80
1008a368:	89 86 ec 02 00 00    	mov    DWORD PTR [esi+0x2ec],eax
1008a36e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008a371:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008a378:	3f 
1008a379:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1008a380:	68 68 40 1a 10       	push   0x101a4068
1008a385:	6a 01                	push   0x1
1008a387:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008a38d:	e8 5e 26 07 00       	call   0x100fc9f0
1008a392:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008a395:	83 c4 1c             	add    esp,0x1c
1008a398:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x100
1008a39f:	01 00 00 
1008a3a2:	c7 86 28 02 00 00 08 	mov    DWORD PTR [esi+0x228],0x8
1008a3a9:	00 00 00 
1008a3ac:	8b 80 9c 01 00 00    	mov    eax,DWORD PTR [eax+0x19c]
1008a3b2:	85 c0                	test   eax,eax
1008a3b4:	75 0e                	jne    0x1008a3c4
1008a3b6:	50                   	push   eax
1008a3b7:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1008a3bd:	83 c4 04             	add    esp,0x4
1008a3c0:	85 c0                	test   eax,eax
1008a3c2:	74 0f                	je     0x1008a3d3
1008a3c4:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
1008a3c7:	85 c9                	test   ecx,ecx
1008a3c9:	74 08                	je     0x1008a3d3
1008a3cb:	8b 01                	mov    eax,DWORD PTR [ecx]
1008a3cd:	ff 76 04             	push   DWORD PTR [esi+0x4]
1008a3d0:	ff 50 54             	call   DWORD PTR [eax+0x54]
1008a3d3:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1008a3d6:	8b ce                	mov    ecx,esi
1008a3d8:	e8 93 08 00 00       	call   0x1008ac70
1008a3dd:	85 c0                	test   eax,eax
1008a3df:	0f 85 6b ff ff ff    	jne    0x1008a350
1008a3e5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008a3e8:	f6 80 a8 01 00 00 20 	test   BYTE PTR [eax+0x1a8],0x20
1008a3ef:	74 14                	je     0x1008a405
1008a3f1:	8b 06                	mov    eax,DWORD PTR [esi]
1008a3f3:	8b ce                	mov    ecx,esi
1008a3f5:	c7 46 7c 00 00 00 00 	mov    DWORD PTR [esi+0x7c],0x0
1008a3fc:	ff 90 44 01 00 00    	call   DWORD PTR [eax+0x144]
1008a402:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008a405:	f3 0f 10 05 20 b0 1a 	movss  xmm0,DWORD PTR ds:0x101ab020
1008a40c:	10 
1008a40d:	0f 2f 80 64 01 00 00 	comiss xmm0,DWORD PTR [eax+0x164]
1008a414:	76 11                	jbe    0x1008a427
1008a416:	8b ce                	mov    ecx,esi
1008a418:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x0
1008a41f:	00 00 00 
1008a422:	e8 89 d3 f8 ff       	call   0x100177b0
1008a427:	c7 86 28 02 00 00 08 	mov    DWORD PTR [esi+0x228],0x8
1008a42e:	00 00 00 
1008a431:	5e                   	pop    esi
1008a432:	5d                   	pop    ebp
1008a433:	c2 08 00             	ret    0x8
