
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10030290 <.text+0x2f290>:
10030290:	55                   	push   ebp
10030291:	8b ec                	mov    ebp,esp
10030293:	6a ff                	push   0xffffffff
10030295:	68 50 d5 19 10       	push   0x1019d550
1003029a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100302a0:	50                   	push   eax
100302a1:	83 ec 08             	sub    esp,0x8
100302a4:	53                   	push   ebx
100302a5:	56                   	push   esi
100302a6:	57                   	push   edi
100302a7:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100302ac:	33 c5                	xor    eax,ebp
100302ae:	50                   	push   eax
100302af:	8d 45 f4             	lea    eax,[ebp-0xc]
100302b2:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100302b8:	8b f9                	mov    edi,ecx
100302ba:	89 7d f0             	mov    DWORD PTR [ebp-0x10],edi
100302bd:	83 7f 4c 00          	cmp    DWORD PTR [edi+0x4c],0x0
100302c1:	c7 07 00 db 1a 10    	mov    DWORD PTR [edi],0x101adb00
100302c7:	74 1e                	je     0x100302e7
100302c9:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
100302cc:	8d 47 3c             	lea    eax,[edi+0x3c]
100302cf:	39 06                	cmp    DWORD PTR [esi],eax
100302d1:	75 14                	jne    0x100302e7
100302d3:	8b 57 54             	mov    edx,DWORD PTR [edi+0x54]
100302d6:	8b 4f 50             	mov    ecx,DWORD PTR [edi+0x50]
100302d9:	2b d1                	sub    edx,ecx
100302db:	89 0e                	mov    DWORD PTR [esi],ecx
100302dd:	8b 47 1c             	mov    eax,DWORD PTR [edi+0x1c]
100302e0:	89 08                	mov    DWORD PTR [eax],ecx
100302e2:	8b 47 2c             	mov    eax,DWORD PTR [edi+0x2c]
100302e5:	89 10                	mov    DWORD PTR [eax],edx
100302e7:	80 7f 48 00          	cmp    BYTE PTR [edi+0x48],0x0
100302eb:	0f 84 95 00 00 00    	je     0x10030386
100302f1:	83 7f 4c 00          	cmp    DWORD PTR [edi+0x4c],0x0
100302f5:	74 12                	je     0x10030309
100302f7:	8b cf                	mov    ecx,edi
100302f9:	e8 82 6d 00 00       	call   0x10037080
100302fe:	ff 77 4c             	push   DWORD PTR [edi+0x4c]
10030301:	e8 5b fa 13 00       	call   0x1016fd61
10030306:	83 c4 04             	add    esp,0x4
10030309:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
1003030c:	8d 5f 04             	lea    ebx,[edi+0x4]
1003030f:	89 5f 0c             	mov    DWORD PTR [edi+0xc],ebx
10030312:	8d 77 08             	lea    esi,[edi+0x8]
10030315:	c6 47 48 00          	mov    BYTE PTR [edi+0x48],0x0
10030319:	8d 48 18             	lea    ecx,[eax+0x18]
1003031c:	c6 47 3d 00          	mov    BYTE PTR [edi+0x3d],0x0
10030320:	8d 50 24             	lea    edx,[eax+0x24]
10030323:	89 77 10             	mov    DWORD PTR [edi+0x10],esi
10030326:	83 c7 14             	add    edi,0x14
10030329:	89 78 1c             	mov    DWORD PTR [eax+0x1c],edi
1003032c:	89 48 20             	mov    DWORD PTR [eax+0x20],ecx
1003032f:	89 50 2c             	mov    DWORD PTR [eax+0x2c],edx
10030332:	83 c0 28             	add    eax,0x28
10030335:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
10030338:	8b 5d f0             	mov    ebx,DWORD PTR [ebp-0x10]
1003033b:	89 43 30             	mov    DWORD PTR [ebx+0x30],eax
1003033e:	8b 5d ec             	mov    ebx,DWORD PTR [ebp-0x14]
10030341:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
10030347:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
1003034d:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
10030353:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
10030359:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
1003035f:	8b 7d f0             	mov    edi,DWORD PTR [ebp-0x10]
10030362:	c7 02 00 00 00 00    	mov    DWORD PTR [edx],0x0
10030368:	c7 47 4c 00 00 00 00 	mov    DWORD PTR [edi+0x4c],0x0
1003036f:	a1 1c 2e 22 10       	mov    eax,ds:0x10222e1c
10030374:	89 47 40             	mov    DWORD PTR [edi+0x40],eax
10030377:	a1 20 2e 22 10       	mov    eax,ds:0x10222e20
1003037c:	89 47 44             	mov    DWORD PTR [edi+0x44],eax
1003037f:	c7 47 38 00 00 00 00 	mov    DWORD PTR [edi+0x38],0x0
10030386:	8b 77 34             	mov    esi,DWORD PTR [edi+0x34]
10030389:	c7 07 c0 da 1a 10    	mov    DWORD PTR [edi],0x101adac0
1003038f:	85 f6                	test   esi,esi
10030391:	74 23                	je     0x100303b6
10030393:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10030396:	85 c9                	test   ecx,ecx
10030398:	74 11                	je     0x100303ab
1003039a:	8b 01                	mov    eax,DWORD PTR [ecx]
1003039c:	ff 50 08             	call   DWORD PTR [eax+0x8]
1003039f:	85 c0                	test   eax,eax
100303a1:	74 08                	je     0x100303ab
100303a3:	8b 10                	mov    edx,DWORD PTR [eax]
100303a5:	8b c8                	mov    ecx,eax
100303a7:	6a 01                	push   0x1
100303a9:	ff 12                	call   DWORD PTR [edx]
100303ab:	6a 08                	push   0x8
100303ad:	56                   	push   esi
100303ae:	e8 f2 d7 10 00       	call   0x1013dba5
100303b3:	83 c4 08             	add    esp,0x8
100303b6:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100303b9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100303c0:	59                   	pop    ecx
100303c1:	5f                   	pop    edi
100303c2:	5e                   	pop    esi
100303c3:	5b                   	pop    ebx
100303c4:	8b e5                	mov    esp,ebp
100303c6:	5d                   	pop    ebp
100303c7:	c3                   	ret
