
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004a350 <.text+0x49350>:
1004a350:	55                   	push   ebp
1004a351:	8b ec                	mov    ebp,esp
1004a353:	6a ff                	push   0xffffffff
1004a355:	68 15 da 19 10       	push   0x1019da15
1004a35a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1004a360:	50                   	push   eax
1004a361:	83 ec 3c             	sub    esp,0x3c
1004a364:	53                   	push   ebx
1004a365:	56                   	push   esi
1004a366:	57                   	push   edi
1004a367:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1004a36c:	33 c5                	xor    eax,ebp
1004a36e:	50                   	push   eax
1004a36f:	8d 45 f4             	lea    eax,[ebp-0xc]
1004a372:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1004a378:	89 65 f0             	mov    DWORD PTR [ebp-0x10],esp
1004a37b:	8b f1                	mov    esi,ecx
1004a37d:	89 75 ec             	mov    DWORD PTR [ebp-0x14],esi
1004a380:	33 ff                	xor    edi,edi
1004a382:	8d 4d d4             	lea    ecx,[ebp-0x2c]
1004a385:	56                   	push   esi
1004a386:	89 7d dc             	mov    DWORD PTR [ebp-0x24],edi
1004a389:	e8 92 fc ff ff       	call   0x1004a020
1004a38e:	80 7d d8 00          	cmp    BYTE PTR [ebp-0x28],0x0
1004a392:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
1004a395:	0f 84 b8 00 00 00    	je     0x1004a453
1004a39b:	8b 06                	mov    eax,DWORD PTR [esi]
1004a39d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004a3a0:	8b 44 30 30          	mov    eax,DWORD PTR [eax+esi*1+0x30]
1004a3a4:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
1004a3a7:	8b cb                	mov    ecx,ebx
1004a3a9:	89 5d e4             	mov    DWORD PTR [ebp-0x1c],ebx
1004a3ac:	8b 03                	mov    eax,DWORD PTR [ebx]
1004a3ae:	ff 50 04             	call   DWORD PTR [eax+0x4]
1004a3b1:	8d 45 e0             	lea    eax,[ebp-0x20]
1004a3b4:	c6 45 fc 01          	mov    BYTE PTR [ebp-0x4],0x1
1004a3b8:	50                   	push   eax
1004a3b9:	e8 32 f4 ff ff       	call   0x100497f0
1004a3be:	83 c4 04             	add    esp,0x4
1004a3c1:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
1004a3c4:	85 db                	test   ebx,ebx
1004a3c6:	74 13                	je     0x1004a3db
1004a3c8:	8b 13                	mov    edx,DWORD PTR [ebx]
1004a3ca:	8b cb                	mov    ecx,ebx
1004a3cc:	ff 52 08             	call   DWORD PTR [edx+0x8]
1004a3cf:	85 c0                	test   eax,eax
1004a3d1:	74 08                	je     0x1004a3db
1004a3d3:	8b 10                	mov    edx,DWORD PTR [eax]
1004a3d5:	8b c8                	mov    ecx,eax
1004a3d7:	6a 01                	push   0x1
1004a3d9:	ff 12                	call   DWORD PTR [edx]
1004a3db:	8b 06                	mov    eax,DWORD PTR [esi]
1004a3dd:	83 ec 08             	sub    esp,0x8
1004a3e0:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1004a3e5:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
1004a3e8:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004a3eb:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004a3ee:	03 ce                	add    ecx,esi
1004a3f0:	c6 45 cc 00          	mov    BYTE PTR [ebp-0x34],0x0
1004a3f4:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
1004a3f8:	8a 41 40             	mov    al,BYTE PTR [ecx+0x40]
1004a3fb:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
1004a400:	88 45 e4             	mov    BYTE PTR [ebp-0x1c],al
1004a403:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
1004a406:	8b 02                	mov    eax,DWORD PTR [edx]
1004a408:	51                   	push   ecx
1004a409:	ff 71 38             	push   DWORD PTR [ecx+0x38]
1004a40c:	8d 4d cc             	lea    ecx,[ebp-0x34]
1004a40f:	ff 75 cc             	push   DWORD PTR [ebp-0x34]
1004a412:	51                   	push   ecx
1004a413:	8b ca                	mov    ecx,edx
1004a415:	ff 50 14             	call   DWORD PTR [eax+0x14]
1004a418:	80 7d cc 00          	cmp    BYTE PTR [ebp-0x34],0x0
1004a41c:	ba 04 00 00 00       	mov    edx,0x4
1004a421:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1004a428:	0f 45 fa             	cmovne edi,edx
1004a42b:	eb 2b                	jmp    0x1004a458
