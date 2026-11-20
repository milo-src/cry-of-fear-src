
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c2970 <.text+0xc1970>:
100c2970:	57                   	push   edi
100c2971:	8b f9                	mov    edi,ecx
100c2973:	8b 87 24 02 00 00    	mov    eax,DWORD PTR [edi+0x224]
100c2979:	83 f8 01             	cmp    eax,0x1
100c297c:	74 05                	je     0x100c2983
100c297e:	83 f8 03             	cmp    eax,0x3
100c2981:	75 27                	jne    0x100c29aa
100c2983:	6a 63                	push   0x63
100c2985:	6a 00                	push   0x0
100c2987:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100c298d:	83 c4 08             	add    esp,0x8
100c2990:	85 c0                	test   eax,eax
100c2992:	75 16                	jne    0x100c29aa
100c2994:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c2997:	f6 80 a8 01 00 00 02 	test   BYTE PTR [eax+0x1a8],0x2
100c299e:	75 0a                	jne    0x100c29aa
100c29a0:	8b 07                	mov    eax,DWORD PTR [edi]
100c29a2:	8b cf                	mov    ecx,edi
100c29a4:	ff 90 34 02 00 00    	call   DWORD PTR [eax+0x234]
100c29aa:	8b 87 24 02 00 00    	mov    eax,DWORD PTR [edi+0x224]
100c29b0:	85 c0                	test   eax,eax
100c29b2:	74 73                	je     0x100c2a27
100c29b4:	83 f8 05             	cmp    eax,0x5
100c29b7:	74 6e                	je     0x100c2a27
100c29b9:	83 f8 08             	cmp    eax,0x8
100c29bc:	74 69                	je     0x100c2a27
100c29be:	f3 0f 2c 87 2c 03 00 	cvttss2si eax,DWORD PTR [edi+0x32c]
100c29c5:	00 
100c29c6:	8b 17                	mov    edx,DWORD PTR [edi]
100c29c8:	8b cf                	mov    ecx,edi
100c29ca:	53                   	push   ebx
100c29cb:	50                   	push   eax
100c29cc:	ff 92 24 01 00 00    	call   DWORD PTR [edx+0x124]
100c29d2:	8b cf                	mov    ecx,edi
100c29d4:	e8 07 d1 ff ff       	call   0x100bfae0
100c29d9:	8b 07                	mov    eax,DWORD PTR [edi]
100c29db:	8b cf                	mov    ecx,edi
100c29dd:	ff 90 dc 01 00 00    	call   DWORD PTR [eax+0x1dc]
100c29e3:	f7 d0                	not    eax
100c29e5:	8b cf                	mov    ecx,edi
100c29e7:	21 87 80 01 00 00    	and    DWORD PTR [edi+0x180],eax
100c29ed:	8b 07                	mov    eax,DWORD PTR [edi]
100c29ef:	ff 90 08 02 00 00    	call   DWORD PTR [eax+0x208]
100c29f5:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100c29fb:	e8 80 4d f5 ff       	call   0x10017780
100c2a00:	85 c0                	test   eax,eax
100c2a02:	74 18                	je     0x100c2a1c
100c2a04:	56                   	push   esi
100c2a05:	8b 37                	mov    esi,DWORD PTR [edi]
100c2a07:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100c2a0d:	e8 7e 4d f5 ff       	call   0x10017790
100c2a12:	50                   	push   eax
100c2a13:	8b cf                	mov    ecx,edi
100c2a15:	ff 96 b8 01 00 00    	call   DWORD PTR [esi+0x1b8]
100c2a1b:	5e                   	pop    esi
100c2a1c:	8b 07                	mov    eax,DWORD PTR [edi]
100c2a1e:	8b cf                	mov    ecx,edi
100c2a20:	ff 90 d8 01 00 00    	call   DWORD PTR [eax+0x1d8]
100c2a26:	5b                   	pop    ebx
100c2a27:	8b cf                	mov    ecx,edi
100c2a29:	e8 42 b0 ff ff       	call   0x100bda70
100c2a2e:	8b 07                	mov    eax,DWORD PTR [edi]
100c2a30:	8b cf                	mov    ecx,edi
100c2a32:	ff 90 04 02 00 00    	call   DWORD PTR [eax+0x204]
100c2a38:	8b cf                	mov    ecx,edi
100c2a3a:	e8 31 86 f4 ff       	call   0x1000b070
100c2a3f:	81 a7 80 01 00 00 ff 	and    DWORD PTR [edi+0x180],0xfffffcff
100c2a46:	fc ff ff 
100c2a49:	8b 87 24 02 00 00    	mov    eax,DWORD PTR [edi+0x224]
100c2a4f:	83 f8 02             	cmp    eax,0x2
100c2a52:	74 0a                	je     0x100c2a5e
100c2a54:	83 f8 03             	cmp    eax,0x3
100c2a57:	74 05                	je     0x100c2a5e
100c2a59:	83 f8 04             	cmp    eax,0x4
100c2a5c:	75 0a                	jne    0x100c2a68
100c2a5e:	c7 87 44 03 00 00 01 	mov    DWORD PTR [edi+0x344],0x1
100c2a65:	00 00 00 
100c2a68:	5f                   	pop    edi
100c2a69:	c3                   	ret
