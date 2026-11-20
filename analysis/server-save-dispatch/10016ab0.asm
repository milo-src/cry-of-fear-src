
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10016ab0 <.text+0x15ab0>:
10016ab0:	55                   	push   ebp
10016ab1:	8b ec                	mov    ebp,esp
10016ab3:	6a ff                	push   0xffffffff
10016ab5:	68 1d d2 19 10       	push   0x1019d21d
10016aba:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10016ac0:	50                   	push   eax
10016ac1:	51                   	push   ecx
10016ac2:	53                   	push   ebx
10016ac3:	56                   	push   esi
10016ac4:	57                   	push   edi
10016ac5:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10016aca:	33 c5                	xor    eax,ebp
10016acc:	50                   	push   eax
10016acd:	8d 45 f4             	lea    eax,[ebp-0xc]
10016ad0:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10016ad6:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10016ad9:	85 c9                	test   ecx,ecx
10016adb:	0f 84 8b 01 00 00    	je     0x10016c6c
10016ae1:	8b 71 7c             	mov    esi,DWORD PTR [ecx+0x7c]
10016ae4:	85 f6                	test   esi,esi
10016ae6:	0f 84 80 01 00 00    	je     0x10016c6c
10016aec:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10016aef:	85 ff                	test   edi,edi
10016af1:	0f 84 75 01 00 00    	je     0x10016c6c
10016af7:	8b 47 1c             	mov    eax,DWORD PTR [edi+0x1c]
10016afa:	8d 1c 40             	lea    ebx,[eax+eax*2]
10016afd:	8b 47 28             	mov    eax,DWORD PTR [edi+0x28]
10016b00:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10016b03:	39 4c d8 04          	cmp    DWORD PTR [eax+ebx*8+0x4],ecx
10016b07:	74 10                	je     0x10016b19
10016b09:	68 b4 60 1a 10       	push   0x101a60b4
10016b0e:	6a 04                	push   0x4
10016b10:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016b16:	83 c4 08             	add    esp,0x8
10016b19:	8b 06                	mov    eax,DWORD PTR [esi]
10016b1b:	8b ce                	mov    ecx,esi
10016b1d:	ff 50 40             	call   DWORD PTR [eax+0x40]
10016b20:	85 c0                	test   eax,eax
10016b22:	0f 88 44 01 00 00    	js     0x10016c6c
10016b28:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016b2b:	85 c0                	test   eax,eax
10016b2d:	0f 84 96 00 00 00    	je     0x10016bc9
10016b33:	8b 08                	mov    ecx,DWORD PTR [eax]
10016b35:	85 c9                	test   ecx,ecx
10016b37:	0f 84 8c 00 00 00    	je     0x10016bc9
10016b3d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016b42:	68 d8 60 1a 10       	push   0x101a60d8
10016b47:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10016b4d:	03 c1                	add    eax,ecx
10016b4f:	50                   	push   eax
10016b50:	e8 9b 8a 12 00       	call   0x1013f5f0
10016b55:	83 c4 08             	add    esp,0x8
10016b58:	85 c0                	test   eax,eax
10016b5a:	74 6d                	je     0x10016bc9
10016b5c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016b5f:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
10016b65:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
10016b6b:	f7 d9                	neg    ecx
10016b6d:	1b c9                	sbb    ecx,ecx
10016b6f:	23 c8                	and    ecx,eax
10016b71:	8b 01                	mov    eax,DWORD PTR [ecx]
10016b73:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10016b79:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
10016b7f:	b9 e4 60 1a 10       	mov    ecx,0x101a60e4
10016b84:	8a 10                	mov    dl,BYTE PTR [eax]
10016b86:	3a 11                	cmp    dl,BYTE PTR [ecx]
10016b88:	75 1a                	jne    0x10016ba4
10016b8a:	84 d2                	test   dl,dl
10016b8c:	74 12                	je     0x10016ba0
10016b8e:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10016b91:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10016b94:	75 0e                	jne    0x10016ba4
10016b96:	83 c0 02             	add    eax,0x2
10016b99:	83 c1 02             	add    ecx,0x2
10016b9c:	84 d2                	test   dl,dl
10016b9e:	75 e4                	jne    0x10016b84
10016ba0:	33 c0                	xor    eax,eax
10016ba2:	eb 05                	jmp    0x10016ba9
10016ba4:	1b c0                	sbb    eax,eax
10016ba6:	83 c8 01             	or     eax,0x1
10016ba9:	85 c0                	test   eax,eax
10016bab:	74 1c                	je     0x10016bc9
10016bad:	8b 06                	mov    eax,DWORD PTR [esi]
10016baf:	8b ce                	mov    ecx,esi
10016bb1:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
10016bb7:	85 c0                	test   eax,eax
10016bb9:	0f 84 ad 00 00 00    	je     0x10016c6c
10016bbf:	80 7e 09 00          	cmp    BYTE PTR [esi+0x9],0x0
10016bc3:	0f 85 a3 00 00 00    	jne    0x10016c6c
10016bc9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016bcc:	83 b8 08 01 00 00 07 	cmp    DWORD PTR [eax+0x108],0x7
10016bd3:	75 53                	jne    0x10016c28
10016bd5:	f3 0f 10 80 00 01 00 	movss  xmm0,DWORD PTR [eax+0x100]
10016bdc:	00 
10016bdd:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10016be3:	f3 0f 10 09          	movss  xmm1,DWORD PTR [ecx]
10016be7:	f3 0f 5c c8          	subss  xmm1,xmm0
10016beb:	f3 0f 58 c1          	addss  xmm0,xmm1
10016bef:	f3 0f 11 80 00 01 00 	movss  DWORD PTR [eax+0x100],xmm0
10016bf6:	00 
10016bf7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016bfa:	f3 0f 10 80 04 01 00 	movss  xmm0,DWORD PTR [eax+0x104]
10016c01:	00 
10016c02:	f3 0f 58 c1          	addss  xmm0,xmm1
10016c06:	f3 0f 11 80 04 01 00 	movss  DWORD PTR [eax+0x104],xmm0
10016c0d:	00 
10016c0e:	f3 0f 10 46 58       	movss  xmm0,DWORD PTR [esi+0x58]
10016c13:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016c16:	f3 0f 58 c1          	addss  xmm0,xmm1
10016c1a:	8b 80 04 01 00 00    	mov    eax,DWORD PTR [eax+0x104]
10016c20:	89 46 5c             	mov    DWORD PTR [esi+0x5c],eax
10016c23:	f3 0f 11 46 58       	movss  DWORD PTR [esi+0x58],xmm0
10016c28:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10016c2b:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
10016c2e:	57                   	push   edi
10016c2f:	89 44 d9 08          	mov    DWORD PTR [ecx+ebx*8+0x8],eax
10016c33:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016c36:	8b 00                	mov    eax,DWORD PTR [eax]
10016c38:	89 44 d9 14          	mov    DWORD PTR [ecx+ebx*8+0x14],eax
10016c3c:	8d 4d f0             	lea    ecx,[ebp-0x10]
10016c3f:	e8 dc f3 0f 00       	call   0x10116020
10016c44:	8b 06                	mov    eax,DWORD PTR [esi]
10016c46:	8d 4d f0             	lea    ecx,[ebp-0x10]
10016c49:	51                   	push   ecx
10016c4a:	8b ce                	mov    ecx,esi
10016c4c:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10016c53:	ff 50 38             	call   DWORD PTR [eax+0x38]
10016c56:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10016c59:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
10016c5c:	2b 44 d9 08          	sub    eax,DWORD PTR [ecx+ebx*8+0x8]
10016c60:	89 44 d9 0c          	mov    DWORD PTR [ecx+ebx*8+0xc],eax
10016c64:	8d 4d f0             	lea    ecx,[ebp-0x10]
10016c67:	e8 14 f4 0f 00       	call   0x10116080
10016c6c:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10016c6f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10016c76:	59                   	pop    ecx
10016c77:	5f                   	pop    edi
10016c78:	5e                   	pop    esi
10016c79:	5b                   	pop    ebx
10016c7a:	8b e5                	mov    esp,ebp
10016c7c:	5d                   	pop    ebp
10016c7d:	c3                   	ret
