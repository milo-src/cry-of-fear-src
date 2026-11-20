
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fc9f0 <.text+0xfb9f0>:
100fc9f0:	55                   	push   ebp
100fc9f1:	8b ec                	mov    ebp,esp
100fc9f3:	83 ec 28             	sub    esp,0x28
100fc9f6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100fc9fb:	33 c5                	xor    eax,ebp
100fc9fd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fca00:	80 3d 89 64 22 10 00 	cmp    BYTE PTR ds:0x10226489,0x0
100fca07:	56                   	push   esi
100fca08:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
100fca0b:	57                   	push   edi
100fca0c:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100fca0f:	74 1e                	je     0x100fca2f
100fca11:	81 fe 8c 8e 1a 10    	cmp    esi,0x101a8e8c
100fca17:	74 16                	je     0x100fca2f
100fca19:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100fca1e:	0f 5a c0             	cvtps2pd xmm0,xmm0
100fca21:	f2 0f 59 05 18 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e18
100fca28:	10 
100fca29:	66 0f 5a c8          	cvtpd2ps xmm1,xmm0
100fca2d:	eb 05                	jmp    0x100fca34
100fca2f:	f3 0f 10 4d 14       	movss  xmm1,DWORD PTR [ebp+0x14]
100fca34:	f3 0f 11 4d d8       	movss  DWORD PTR [ebp-0x28],xmm1
100fca39:	85 f6                	test   esi,esi
100fca3b:	74 78                	je     0x100fcab5
100fca3d:	80 3e 21             	cmp    BYTE PTR [esi],0x21
100fca40:	75 73                	jne    0x100fcab5
100fca42:	8d 45 dc             	lea    eax,[ebp-0x24]
100fca45:	50                   	push   eax
100fca46:	56                   	push   esi
100fca47:	e8 b4 18 00 00       	call   0x100fe300
100fca4c:	83 c4 08             	add    esp,0x8
100fca4f:	85 c0                	test   eax,eax
100fca51:	78 31                	js     0x100fca84
100fca53:	ff 75 20             	push   DWORD PTR [ebp+0x20]
100fca56:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
100fca5b:	8d 45 dc             	lea    eax,[ebp-0x24]
100fca5e:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
100fca61:	83 ec 08             	sub    esp,0x8
100fca64:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100fca6a:	f3 0f 10 45 d8       	movss  xmm0,DWORD PTR [ebp-0x28]
100fca6f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100fca74:	50                   	push   eax
100fca75:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100fca78:	57                   	push   edi
100fca79:	ff 15 bc 2f 22 10    	call   DWORD PTR ds:0x10222fbc
100fca7f:	83 c4 1c             	add    esp,0x1c
100fca82:	eb 11                	jmp    0x100fca95
100fca84:	56                   	push   esi
100fca85:	68 38 ea 1d 10       	push   0x101dea38
100fca8a:	6a 02                	push   0x2
100fca8c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fca92:	83 c4 0c             	add    esp,0xc
100fca95:	8d 87 88 00 00 00    	lea    eax,[edi+0x88]
100fca9b:	50                   	push   eax
100fca9c:	56                   	push   esi
100fca9d:	e8 7e d7 01 00       	call   0x1011a220
100fcaa2:	83 c4 08             	add    esp,0x8
100fcaa5:	5f                   	pop    edi
100fcaa6:	5e                   	pop    esi
100fcaa7:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fcaaa:	33 cd                	xor    ecx,ebp
100fcaac:	e8 02 11 04 00       	call   0x1013dbb3
100fcab1:	8b e5                	mov    esp,ebp
100fcab3:	5d                   	pop    ebp
100fcab4:	c3                   	ret
100fcab5:	ff 75 20             	push   DWORD PTR [ebp+0x20]
100fcab8:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
100fcabd:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
100fcac0:	83 ec 08             	sub    esp,0x8
100fcac3:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100fcac9:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100fcace:	56                   	push   esi
100fcacf:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100fcad2:	57                   	push   edi
100fcad3:	ff 15 bc 2f 22 10    	call   DWORD PTR ds:0x10222fbc
100fcad9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fcadc:	83 c4 1c             	add    esp,0x1c
100fcadf:	33 cd                	xor    ecx,ebp
100fcae1:	5f                   	pop    edi
100fcae2:	5e                   	pop    esi
100fcae3:	e8 cb 10 04 00       	call   0x1013dbb3
100fcae8:	8b e5                	mov    esp,ebp
100fcaea:	5d                   	pop    ebp
100fcaeb:	c3                   	ret
