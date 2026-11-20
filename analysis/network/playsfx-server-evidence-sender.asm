
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116a40 <.text+0x115a40>:
10116a40:	55                   	push   ebp
10116a41:	8b ec                	mov    ebp,esp
10116a43:	83 ec 0c             	sub    esp,0xc
10116a46:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
10116a4c:	53                   	push   ebx
10116a4d:	56                   	push   esi
10116a4e:	0f b6 75 10          	movzx  esi,BYTE PTR [ebp+0x10]
10116a52:	8b 01                	mov    eax,DWORD PTR [ecx]
10116a54:	57                   	push   edi
10116a55:	89 75 10             	mov    DWORD PTR [ebp+0x10],esi
10116a58:	ff 50 20             	call   DWORD PTR [eax+0x20]
10116a5b:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10116a5e:	8b 7d 20             	mov    edi,DWORD PTR [ebp+0x20]
10116a61:	85 c0                	test   eax,eax
10116a63:	0f 84 25 01 00 00    	je     0x10116b8e
10116a69:	ff 77 04             	push   DWORD PTR [edi+0x4]
10116a6c:	e8 6f bb ef ff       	call   0x100125e0
10116a71:	83 c4 04             	add    esp,0x4
10116a74:	8d 4d f4             	lea    ecx,[ebp-0xc]
10116a77:	8b 10                	mov    edx,DWORD PTR [eax]
10116a79:	51                   	push   ecx
10116a7a:	8b c8                	mov    ecx,eax
10116a7c:	ff 92 28 02 00 00    	call   DWORD PTR [edx+0x228]
10116a82:	68 d4 52 1e 10       	push   0x101e52d4
10116a87:	53                   	push   ebx
10116a88:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
10116a8c:	66 0f d6 45 14       	movq   QWORD PTR [ebp+0x14],xmm0
10116a91:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
10116a94:	89 45 1c             	mov    DWORD PTR [ebp+0x1c],eax
10116a97:	e8 54 8b 02 00       	call   0x1013f5f0
10116a9c:	83 c4 08             	add    esp,0x8
10116a9f:	85 c0                	test   eax,eax
10116aa1:	0f 84 e7 00 00 00    	je     0x10116b8e
10116aa7:	80 7d 24 00          	cmp    BYTE PTR [ebp+0x24],0x0
10116aab:	0f 84 f1 00 00 00    	je     0x10116ba2
10116ab1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10116ab6:	be 01 00 00 00       	mov    esi,0x1
10116abb:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
10116ac1:	0f 8c 57 01 00 00    	jl     0x10116c1e
10116ac7:	56                   	push   esi
10116ac8:	e8 b3 2b 00 00       	call   0x10119680
10116acd:	8b f8                	mov    edi,eax
10116acf:	83 c4 04             	add    esp,0x4
10116ad2:	85 ff                	test   edi,edi
10116ad4:	0f 84 9b 00 00 00    	je     0x10116b75
10116ada:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10116add:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10116ae3:	6a 00                	push   0x0
10116ae5:	ff 35 f4 66 22 10    	push   DWORD PTR ds:0x102266f4
10116aeb:	6a 01                	push   0x1
10116aed:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10116af3:	53                   	push   ebx
10116af4:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
10116afa:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10116afd:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10116b03:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10116b06:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10116b0c:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10116b11:	83 c4 18             	add    esp,0x18
10116b14:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10116b19:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10116b1f:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
10116b24:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10116b29:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10116b2f:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
10116b34:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10116b39:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10116b3f:	83 c4 04             	add    esp,0x4
10116b42:	3b 7d 20             	cmp    edi,DWORD PTR [ebp+0x20]
10116b45:	75 04                	jne    0x10116b4b
10116b47:	6a 00                	push   0x0
10116b49:	eb 02                	jmp    0x10116b4d
10116b4b:	6a 01                	push   0x1
10116b4d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10116b53:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10116b56:	83 c4 04             	add    esp,0x4
10116b59:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10116b5f:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
10116b65:	50                   	push   eax
10116b66:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10116b6c:	83 c4 08             	add    esp,0x8
10116b6f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10116b75:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10116b7a:	46                   	inc    esi
10116b7b:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
10116b81:	0f 8e 40 ff ff ff    	jle    0x10116ac7
10116b87:	5f                   	pop    edi
10116b88:	5e                   	pop    esi
10116b89:	5b                   	pop    ebx
10116b8a:	8b e5                	mov    esp,ebp
10116b8c:	5d                   	pop    ebp
10116b8d:	c3                   	ret
10116b8e:	80 7d 24 00          	cmp    BYTE PTR [ebp+0x24],0x0
10116b92:	74 0e                	je     0x10116ba2
10116b94:	6a 00                	push   0x0
10116b96:	6a 00                	push   0x0
10116b98:	ff 35 f4 66 22 10    	push   DWORD PTR ds:0x102266f4
10116b9e:	6a 02                	push   0x2
10116ba0:	eb 13                	jmp    0x10116bb5
10116ba2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10116ba5:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10116bab:	6a 00                	push   0x0
10116bad:	ff 35 f4 66 22 10    	push   DWORD PTR ds:0x102266f4
10116bb3:	6a 01                	push   0x1
10116bb5:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10116bbb:	53                   	push   ebx
10116bbc:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
10116bc2:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10116bc5:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10116bcb:	56                   	push   esi
10116bcc:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10116bd2:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10116bd7:	83 c4 18             	add    esp,0x18
10116bda:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10116bdf:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10116be5:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
10116bea:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10116bef:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10116bf5:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
10116bfa:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10116bff:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10116c05:	6a 00                	push   0x0
10116c07:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10116c0d:	6a 01                	push   0x1
10116c0f:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10116c15:	83 c4 0c             	add    esp,0xc
10116c18:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10116c1e:	5f                   	pop    edi
10116c1f:	5e                   	pop    esi
10116c20:	5b                   	pop    ebx
10116c21:	8b e5                	mov    esp,ebp
10116c23:	5d                   	pop    ebp
10116c24:	c3                   	ret
