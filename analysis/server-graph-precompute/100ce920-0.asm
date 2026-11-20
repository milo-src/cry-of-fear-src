
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ce920 <.text+0xcd920>:
100ce920:	55                   	push   ebp
100ce921:	8b ec                	mov    ebp,esp
100ce923:	81 ec d0 00 00 00    	sub    esp,0xd0
100ce929:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100ce92e:	33 c5                	xor    eax,ebp
100ce930:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100ce933:	83 3d b0 38 22 10 00 	cmp    DWORD PTR ds:0x102238b0,0x0
100ce93a:	0f 84 2f 01 00 00    	je     0x100cea6f
100ce940:	83 3d b4 38 22 10 00 	cmp    DWORD PTR ds:0x102238b4,0x0
100ce947:	0f 84 22 01 00 00    	je     0x100cea6f
100ce94d:	56                   	push   esi
100ce94e:	6a 00                	push   0x0
100ce950:	6a 00                	push   0x0
100ce952:	6a 13                	push   0x13
100ce954:	6a 00                	push   0x0
100ce956:	8d 85 34 ff ff ff    	lea    eax,[ebp-0xcc]
100ce95c:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100ce961:	50                   	push   eax
100ce962:	e8 79 ec ff ff       	call   0x100cd5e0
100ce967:	8b f0                	mov    esi,eax
100ce969:	85 f6                	test   esi,esi
100ce96b:	75 1f                	jne    0x100ce98c
100ce96d:	68 f8 71 1d 10       	push   0x101d71f8
100ce972:	6a 02                	push   0x2
100ce974:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ce97a:	83 c4 08             	add    esp,0x8
100ce97d:	5e                   	pop    esi
100ce97e:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ce981:	33 cd                	xor    ecx,ebp
100ce983:	e8 2b f2 06 00       	call   0x1013dbb3
100ce988:	8b e5                	mov    esp,ebp
100ce98a:	5d                   	pop    ebp
100ce98b:	c3                   	ret
100ce98c:	53                   	push   ebx
100ce98d:	57                   	push   edi
100ce98e:	56                   	push   esi
100ce98f:	68 04 72 1d 10       	push   0x101d7204
100ce994:	6a 02                	push   0x2
100ce996:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ce99c:	6b bd 34 ff ff ff 58 	imul   edi,DWORD PTR [ebp-0xcc],0x58
100ce9a3:	8d 4e ff             	lea    ecx,[esi-0x1]
100ce9a6:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100ce9ab:	83 c4 0c             	add    esp,0xc
100ce9ae:	33 db                	xor    ebx,ebx
100ce9b0:	89 8d 30 ff ff ff    	mov    DWORD PTR [ebp-0xd0],ecx
100ce9b6:	03 f8                	add    edi,eax
100ce9b8:	85 c9                	test   ecx,ecx
100ce9ba:	0f 8e cd 00 00 00    	jle    0x100cea8d
100ce9c0:	6b b4 9d 38 ff ff ff 	imul   esi,DWORD PTR [ebp+ebx*4-0xc8],0x58
100ce9c7:	58 
100ce9c8:	6a 00                	push   0x0
100ce9ca:	6a 00                	push   0x0
100ce9cc:	6a 17                	push   0x17
100ce9ce:	6a 00                	push   0x0
100ce9d0:	03 f0                	add    esi,eax
100ce9d2:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ce9d8:	6a 66                	push   0x66
100ce9da:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ce9e0:	f3 0f 10 07          	movss  xmm0,DWORD PTR [edi]
100ce9e4:	83 c4 10             	add    esp,0x10
100ce9e7:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ce9ec:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100ce9f2:	f3 0f 10 47 04       	movss  xmm0,DWORD PTR [edi+0x4]
100ce9f7:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ce9fc:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cea02:	f3 0f 10 47 08       	movss  xmm0,DWORD PTR [edi+0x8]
100cea07:	f3 0f 58 05 d8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ed8
100cea0e:	10 
100cea0f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cea14:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cea1a:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100cea1e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cea23:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cea29:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
100cea2e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cea33:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cea39:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
100cea3e:	f3 0f 58 05 d8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ed8
100cea45:	10 
100cea46:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cea4b:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cea51:	83 c4 04             	add    esp,0x4
100cea54:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100cea5a:	43                   	inc    ebx
100cea5b:	8b fe                	mov    edi,esi
100cea5d:	3b 9d 30 ff ff ff    	cmp    ebx,DWORD PTR [ebp-0xd0]
100cea63:	7d 28                	jge    0x100cea8d
100cea65:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cea6a:	e9 51 ff ff ff       	jmp    0x100ce9c0
100cea6f:	68 90 67 1d 10       	push   0x101d6790
100cea74:	6a 02                	push   0x2
100cea76:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cea7c:	83 c4 08             	add    esp,0x8
100cea7f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cea82:	33 cd                	xor    ecx,ebp
100cea84:	e8 2a f1 06 00       	call   0x1013dbb3
100cea89:	8b e5                	mov    esp,ebp
100cea8b:	5d                   	pop    ebp
100cea8c:	c3                   	ret
100cea8d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cea90:	5f                   	pop    edi
100cea91:	5b                   	pop    ebx
100cea92:	33 cd                	xor    ecx,ebp
100cea94:	5e                   	pop    esi
100cea95:	e8 19 f1 06 00       	call   0x1013dbb3
100cea9a:	8b e5                	mov    esp,ebp
100cea9c:	5d                   	pop    ebp
100cea9d:	c3                   	ret
