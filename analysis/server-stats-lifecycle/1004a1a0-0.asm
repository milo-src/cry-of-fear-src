
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004a1a0 <.text+0x491a0>:
1004a1a0:	55                   	push   ebp
1004a1a1:	8b ec                	mov    ebp,esp
1004a1a3:	6a ff                	push   0xffffffff
1004a1a5:	68 d5 d9 19 10       	push   0x1019d9d5
1004a1aa:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1004a1b0:	50                   	push   eax
1004a1b1:	83 ec 38             	sub    esp,0x38
1004a1b4:	53                   	push   ebx
1004a1b5:	56                   	push   esi
1004a1b6:	57                   	push   edi
1004a1b7:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1004a1bc:	33 c5                	xor    eax,ebp
1004a1be:	50                   	push   eax
1004a1bf:	8d 45 f4             	lea    eax,[ebp-0xc]
1004a1c2:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1004a1c8:	89 65 f0             	mov    DWORD PTR [ebp-0x10],esp
1004a1cb:	8b f1                	mov    esi,ecx
1004a1cd:	89 75 e4             	mov    DWORD PTR [ebp-0x1c],esi
1004a1d0:	33 ff                	xor    edi,edi
1004a1d2:	8d 4d d8             	lea    ecx,[ebp-0x28]
1004a1d5:	56                   	push   esi
1004a1d6:	89 7d e0             	mov    DWORD PTR [ebp-0x20],edi
1004a1d9:	e8 42 fe ff ff       	call   0x1004a020
1004a1de:	80 7d dc 00          	cmp    BYTE PTR [ebp-0x24],0x0
1004a1e2:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
1004a1e5:	0f 84 ae 00 00 00    	je     0x1004a299
1004a1eb:	8b 06                	mov    eax,DWORD PTR [esi]
1004a1ed:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004a1f0:	8b 44 30 30          	mov    eax,DWORD PTR [eax+esi*1+0x30]
1004a1f4:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
1004a1f7:	8b cb                	mov    ecx,ebx
1004a1f9:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
1004a1fc:	8b 03                	mov    eax,DWORD PTR [ebx]
1004a1fe:	ff 50 04             	call   DWORD PTR [eax+0x4]
1004a201:	8d 45 e8             	lea    eax,[ebp-0x18]
1004a204:	c6 45 fc 01          	mov    BYTE PTR [ebp-0x4],0x1
1004a208:	50                   	push   eax
1004a209:	e8 e2 f5 ff ff       	call   0x100497f0
1004a20e:	83 c4 04             	add    esp,0x4
1004a211:	8b d0                	mov    edx,eax
1004a213:	89 55 ec             	mov    DWORD PTR [ebp-0x14],edx
1004a216:	85 db                	test   ebx,ebx
1004a218:	74 16                	je     0x1004a230
1004a21a:	8b 13                	mov    edx,DWORD PTR [ebx]
1004a21c:	8b cb                	mov    ecx,ebx
1004a21e:	ff 52 08             	call   DWORD PTR [edx+0x8]
1004a221:	85 c0                	test   eax,eax
1004a223:	74 08                	je     0x1004a22d
1004a225:	8b 10                	mov    edx,DWORD PTR [eax]
1004a227:	8b c8                	mov    ecx,eax
1004a229:	6a 01                	push   0x1
1004a22b:	ff 12                	call   DWORD PTR [edx]
1004a22d:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
1004a230:	8b 06                	mov    eax,DWORD PTR [esi]
1004a232:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1004a235:	c6 45 d0 00          	mov    BYTE PTR [ebp-0x30],0x0
1004a239:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
1004a23d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004a240:	8d 0c 30             	lea    ecx,[eax+esi*1]
1004a243:	8a 41 40             	mov    al,BYTE PTR [ecx+0x40]
1004a246:	88 45 ec             	mov    BYTE PTR [ebp-0x14],al
1004a249:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
1004a24c:	8b 02                	mov    eax,DWORD PTR [edx]
1004a24e:	51                   	push   ecx
1004a24f:	ff 71 38             	push   DWORD PTR [ecx+0x38]
1004a252:	8d 4d d0             	lea    ecx,[ebp-0x30]
1004a255:	ff 75 d0             	push   DWORD PTR [ebp-0x30]
1004a258:	51                   	push   ecx
1004a259:	8b ca                	mov    ecx,edx
1004a25b:	ff 50 24             	call   DWORD PTR [eax+0x24]
1004a25e:	80 7d d0 00          	cmp    BYTE PTR [ebp-0x30],0x0
1004a262:	ba 04 00 00 00       	mov    edx,0x4
1004a267:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1004a26e:	0f 45 fa             	cmovne edi,edx
1004a271:	eb 2b                	jmp    0x1004a29e
