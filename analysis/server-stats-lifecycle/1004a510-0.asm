
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004a510 <.text+0x49510>:
1004a510:	55                   	push   ebp
1004a511:	8b ec                	mov    ebp,esp
1004a513:	6a ff                	push   0xffffffff
1004a515:	68 40 da 19 10       	push   0x1019da40
1004a51a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1004a520:	50                   	push   eax
1004a521:	56                   	push   esi
1004a522:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1004a527:	33 c5                	xor    eax,ebp
1004a529:	50                   	push   eax
1004a52a:	8d 45 f4             	lea    eax,[ebp-0xc]
1004a52d:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1004a533:	8b 01                	mov    eax,DWORD PTR [ecx]
1004a535:	8d 71 68             	lea    esi,[ecx+0x68]
1004a538:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004a53b:	c7 44 30 98 34 14 1b 	mov    DWORD PTR [eax+esi*1-0x68],0x101b1434
1004a542:	10 
1004a543:	8b 46 98             	mov    eax,DWORD PTR [esi-0x68]
1004a546:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004a549:	8d 41 98             	lea    eax,[ecx-0x68]
1004a54c:	89 44 31 94          	mov    DWORD PTR [ecx+esi*1-0x6c],eax
1004a550:	8d 4e 9c             	lea    ecx,[esi-0x64]
1004a553:	e8 38 5d fe ff       	call   0x10030290
1004a558:	8b 46 98             	mov    eax,DWORD PTR [esi-0x68]
1004a55b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004a55e:	c7 44 30 98 24 14 1b 	mov    DWORD PTR [eax+esi*1-0x68],0x101b1424
1004a565:	10 
1004a566:	8b 46 98             	mov    eax,DWORD PTR [esi-0x68]
1004a569:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004a56c:	8d 41 f8             	lea    eax,[ecx-0x8]
1004a56f:	89 44 31 94          	mov    DWORD PTR [ecx+esi*1-0x6c],eax
1004a573:	56                   	push   esi
1004a574:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1004a57b:	c7 06 58 da 1a 10    	mov    DWORD PTR [esi],0x101ada58
1004a581:	e8 6f 8a 0d 00       	call   0x10122ff5
1004a586:	83 c4 04             	add    esp,0x4
1004a589:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1004a58c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1004a593:	59                   	pop    ecx
1004a594:	5e                   	pop    esi
1004a595:	8b e5                	mov    esp,ebp
1004a597:	5d                   	pop    ebp
1004a598:	c3                   	ret
