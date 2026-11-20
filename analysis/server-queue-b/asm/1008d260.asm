
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008d260 <.text+0x8c260>:
1008d260:	56                   	push   esi
1008d261:	8b f1                	mov    esi,ecx
1008d263:	57                   	push   edi
1008d264:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d26a:	e8 21 a5 f8 ff       	call   0x10017790
1008d26f:	50                   	push   eax
1008d270:	ff b6 7c 01 00 00    	push   DWORD PTR [esi+0x17c]
1008d276:	e8 e5 bd 08 00       	call   0x10119060
1008d27b:	83 c4 08             	add    esp,0x8
1008d27e:	85 c0                	test   eax,eax
1008d280:	75 03                	jne    0x1008d285
1008d282:	5f                   	pop    edi
1008d283:	5e                   	pop    esi
1008d284:	c3                   	ret
1008d285:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008d288:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
1008d28f:	74 18                	je     0x1008d2a9
1008d291:	83 be 00 01 00 00 00 	cmp    DWORD PTR [esi+0x100],0x0
1008d298:	75 0f                	jne    0x1008d2a9
1008d29a:	8b ce                	mov    ecx,esi
1008d29c:	e8 7f 00 00 00       	call   0x1008d320
1008d2a1:	5f                   	pop    edi
1008d2a2:	b8 01 00 00 00       	mov    eax,0x1
1008d2a7:	5e                   	pop    esi
1008d2a8:	c3                   	ret
1008d2a9:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d2af:	e8 cc a4 f8 ff       	call   0x10017780
1008d2b4:	85 c0                	test   eax,eax
1008d2b6:	74 41                	je     0x1008d2f9
1008d2b8:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d2be:	e8 dd a4 f8 ff       	call   0x100177a0
1008d2c3:	8b c8                	mov    ecx,eax
1008d2c5:	8b 10                	mov    edx,DWORD PTR [eax]
1008d2c7:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1008d2cd:	85 c0                	test   eax,eax
1008d2cf:	74 28                	je     0x1008d2f9
1008d2d1:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d2d7:	e8 c4 a4 f8 ff       	call   0x100177a0
1008d2dc:	0f b6 8e 80 01 00 00 	movzx  ecx,BYTE PTR [esi+0x180]
1008d2e3:	6a 00                	push   0x0
1008d2e5:	51                   	push   ecx
1008d2e6:	8b 10                	mov    edx,DWORD PTR [eax]
1008d2e8:	66 0f 6e c1          	movd   xmm0,ecx
1008d2ec:	8b c8                	mov    ecx,eax
1008d2ee:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1008d2f1:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008d2f6:	ff 52 68             	call   DWORD PTR [edx+0x68]
1008d2f9:	6a 00                	push   0x0
1008d2fb:	6a 00                	push   0x0
1008d2fd:	8d 86 84 01 00 00    	lea    eax,[esi+0x184]
1008d303:	50                   	push   eax
1008d304:	ff 76 04             	push   DWORD PTR [esi+0x4]
1008d307:	e8 04 0d 00 00       	call   0x1008e010
1008d30c:	83 c4 10             	add    esp,0x10
1008d30f:	8b ce                	mov    ecx,esi
1008d311:	e8 6a 01 00 00       	call   0x1008d480
1008d316:	5f                   	pop    edi
1008d317:	b8 01 00 00 00       	mov    eax,0x1
1008d31c:	5e                   	pop    esi
1008d31d:	c3                   	ret
