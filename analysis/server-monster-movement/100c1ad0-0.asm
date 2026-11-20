
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1ad0 <.text+0xc0ad0>:
100c1ad0:	55                   	push   ebp
100c1ad1:	8b ec                	mov    ebp,esp
100c1ad3:	81 ec 44 01 00 00    	sub    esp,0x144
100c1ad9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100c1ade:	33 c5                	xor    eax,ebp
100c1ae0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100c1ae3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c1ae6:	56                   	push   esi
100c1ae7:	57                   	push   edi
100c1ae8:	8b f9                	mov    edi,ecx
100c1aea:	89 85 e4 fe ff ff    	mov    DWORD PTR [ebp-0x11c],eax
100c1af0:	33 f6                	xor    esi,esi
100c1af2:	8b 8f bc 02 00 00    	mov    ecx,DWORD PTR [edi+0x2bc]
100c1af8:	83 f9 08             	cmp    ecx,0x8
100c1afb:	0f 8d aa 03 00 00    	jge    0x100c1eab
100c1b01:	8b c1                	mov    eax,ecx
100c1b03:	c1 e0 04             	shl    eax,0x4
100c1b06:	05 44 02 00 00       	add    eax,0x244
100c1b0b:	03 c7                	add    eax,edi
100c1b0d:	0f 1f 00             	nop    DWORD PTR [eax]
100c1b10:	8b 10                	mov    edx,DWORD PTR [eax]
100c1b12:	85 d2                	test   edx,edx
100c1b14:	74 0e                	je     0x100c1b24
100c1b16:	46                   	inc    esi
100c1b17:	84 d2                	test   dl,dl
100c1b19:	78 09                	js     0x100c1b24
100c1b1b:	41                   	inc    ecx
100c1b1c:	83 c0 10             	add    eax,0x10
100c1b1f:	83 f9 08             	cmp    ecx,0x8
100c1b22:	7c ec                	jl     0x100c1b10
100c1b24:	83 fe 02             	cmp    esi,0x2
100c1b27:	0f 8c 7e 03 00 00    	jl     0x100c1eab
100c1b2d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c1b30:	33 c9                	xor    ecx,ecx
100c1b32:	53                   	push   ebx
100c1b33:	33 db                	xor    ebx,ebx
100c1b35:	89 8d ec fe ff ff    	mov    DWORD PTR [ebp-0x114],ecx
100c1b3b:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100c1b40:	66 0f d6 85 cc fe ff 	movq   QWORD PTR [ebp-0x134],xmm0
100c1b47:	ff 
100c1b48:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100c1b4b:	89 85 d4 fe ff ff    	mov    DWORD PTR [ebp-0x12c],eax
100c1b51:	8d 46 ff             	lea    eax,[esi-0x1]
100c1b54:	89 85 c8 fe ff ff    	mov    DWORD PTR [ebp-0x138],eax
100c1b5a:	85 c0                	test   eax,eax
100c1b5c:	0f 8e c8 02 00 00    	jle    0x100c1e2a
100c1b62:	8d 85 0c ff ff ff    	lea    eax,[ebp-0xf4]
100c1b68:	89 85 f0 fe ff ff    	mov    DWORD PTR [ebp-0x110],eax
100c1b6e:	8d b5 fc fe ff ff    	lea    esi,[ebp-0x104]
100c1b74:	8d 85 18 ff ff ff    	lea    eax,[ebp-0xe8]
100c1b7a:	89 85 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],eax
100c1b80:	8d 85 08 ff ff ff    	lea    eax,[ebp-0xf8]
100c1b86:	89 85 f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],eax
100c1b8c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c1b90:	8b 87 bc 02 00 00    	mov    eax,DWORD PTR [edi+0x2bc]
100c1b96:	03 c1                	add    eax,ecx
100c1b98:	c1 e0 04             	shl    eax,0x4
100c1b9b:	89 85 e8 fe ff ff    	mov    DWORD PTR [ebp-0x118],eax
100c1ba1:	ff b4 38 44 02 00 00 	push   DWORD PTR [eax+edi*1+0x244]
100c1ba8:	e8 33 08 00 00       	call   0x100c23e0
100c1bad:	83 c4 04             	add    esp,0x4
100c1bb0:	85 c0                	test   eax,eax
100c1bb2:	8b 85 e8 fe ff ff    	mov    eax,DWORD PTR [ebp-0x118]
100c1bb8:	75 2d                	jne    0x100c1be7
100c1bba:	0f 10 84 38 38 02 00 	movups xmm0,XMMWORD PTR [eax+edi*1+0x238]
100c1bc1:	00 
100c1bc2:	8b 8d f4 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x10c]
100c1bc8:	43                   	inc    ebx
100c1bc9:	8b 95 f0 fe ff ff    	mov    edx,DWORD PTR [ebp-0x110]
100c1bcf:	83 c1 10             	add    ecx,0x10
100c1bd2:	83 85 f8 fe ff ff 10 	add    DWORD PTR [ebp-0x108],0x10
100c1bd9:	83 c2 10             	add    edx,0x10
100c1bdc:	0f 11 06             	movups XMMWORD PTR [esi],xmm0
100c1bdf:	83 c6 10             	add    esi,0x10
100c1be2:	e9 f8 01 00 00       	jmp    0x100c1ddf
100c1be7:	8b 17                	mov    edx,DWORD PTR [edi]
100c1be9:	05 48 02 00 00       	add    eax,0x248
100c1bee:	6a 00                	push   0x0
100c1bf0:	ff b5 e4 fe ff ff    	push   DWORD PTR [ebp-0x11c]
100c1bf6:	03 c7                	add    eax,edi
100c1bf8:	8b cf                	mov    ecx,edi
100c1bfa:	50                   	push   eax
100c1bfb:	8d 85 cc fe ff ff    	lea    eax,[ebp-0x134]
100c1c01:	50                   	push   eax
100c1c02:	ff 92 58 01 00 00    	call   DWORD PTR [edx+0x158]
100c1c08:	83 f8 02             	cmp    eax,0x2
100c1c0b:	0f 84 00 02 00 00    	je     0x100c1e11
100c1c11:	8b 87 bc 02 00 00    	mov    eax,DWORD PTR [edi+0x2bc]
100c1c17:	8d 8d d8 fe ff ff    	lea    ecx,[ebp-0x128]
100c1c1d:	03 85 ec fe ff ff    	add    eax,DWORD PTR [ebp-0x114]
100c1c23:	f3 0f 10 2d d8 1d 1a 	movss  xmm5,DWORD PTR ds:0x101a1dd8
100c1c2a:	10 
100c1c2b:	03 c0                	add    eax,eax
100c1c2d:	6a 00                	push   0x0
100c1c2f:	ff b5 e4 fe ff ff    	push   DWORD PTR [ebp-0x11c]
100c1c35:	f3 0f 10 8c c7 4c 02 	movss  xmm1,DWORD PTR [edi+eax*8+0x24c]
100c1c3c:	00 00 
100c1c3e:	f3 0f 10 94 c7 50 02 	movss  xmm2,DWORD PTR [edi+eax*8+0x250]
100c1c45:	00 00 
100c1c47:	f3 0f 10 84 c7 38 02 	movss  xmm0,DWORD PTR [edi+eax*8+0x238]
100c1c4e:	00 00 
100c1c50:	f3 0f 58 84 c7 48 02 	addss  xmm0,DWORD PTR [edi+eax*8+0x248]
100c1c57:	00 00 
100c1c59:	f3 0f 10 9c c7 3c 02 	movss  xmm3,DWORD PTR [edi+eax*8+0x23c]
100c1c60:	00 00 
100c1c62:	f3 0f 10 a4 c7 40 02 	movss  xmm4,DWORD PTR [edi+eax*8+0x240]
100c1c69:	00 00 
100c1c6b:	f3 0f 58 d9          	addss  xmm3,xmm1
100c1c6f:	f3 0f 58 e2          	addss  xmm4,xmm2
100c1c73:	51                   	push   ecx
100c1c74:	f3 0f 59 c5          	mulss  xmm0,xmm5
100c1c78:	8d 8d cc fe ff ff    	lea    ecx,[ebp-0x134]
100c1c7e:	51                   	push   ecx
100c1c7f:	f3 0f 59 dd          	mulss  xmm3,xmm5
100c1c83:	8b cf                	mov    ecx,edi
100c1c85:	f3 0f 11 85 d8 fe ff 	movss  DWORD PTR [ebp-0x128],xmm0
100c1c8c:	ff 
100c1c8d:	f3 0f 59 e5          	mulss  xmm4,xmm5
100c1c91:	f3 0f 11 9d dc fe ff 	movss  DWORD PTR [ebp-0x124],xmm3
100c1c98:	ff 
100c1c99:	f3 0f 11 a5 e0 fe ff 	movss  DWORD PTR [ebp-0x120],xmm4
100c1ca0:	ff 
100c1ca1:	f3 0f 10 8c c7 3c 02 	movss  xmm1,DWORD PTR [edi+eax*8+0x23c]
100c1ca8:	00 00 
100c1caa:	f3 0f 10 94 c7 40 02 	movss  xmm2,DWORD PTR [edi+eax*8+0x240]
100c1cb1:	00 00 
100c1cb3:	f3 0f 10 84 c7 38 02 	movss  xmm0,DWORD PTR [edi+eax*8+0x238]
100c1cba:	00 00 
100c1cbc:	f3 0f 58 85 cc fe ff 	addss  xmm0,DWORD PTR [ebp-0x134]
100c1cc3:	ff 
100c1cc4:	f3 0f 58 8d d0 fe ff 	addss  xmm1,DWORD PTR [ebp-0x130]
100c1ccb:	ff 
100c1ccc:	f3 0f 58 95 d4 fe ff 	addss  xmm2,DWORD PTR [ebp-0x12c]
100c1cd3:	ff 
100c1cd4:	f3 0f 59 c5          	mulss  xmm0,xmm5
100c1cd8:	f3 0f 59 cd          	mulss  xmm1,xmm5
100c1cdc:	f3 0f 59 d5          	mulss  xmm2,xmm5
100c1ce0:	f3 0f 11 85 bc fe ff 	movss  DWORD PTR [ebp-0x144],xmm0
100c1ce7:	ff 
100c1ce8:	f3 0f 11 8d c0 fe ff 	movss  DWORD PTR [ebp-0x140],xmm1
100c1cef:	ff 
100c1cf0:	f3 0f 11 95 c4 fe ff 	movss  DWORD PTR [ebp-0x13c],xmm2
100c1cf7:	ff 
100c1cf8:	8b 84 c7 44 02 00 00 	mov    eax,DWORD PTR [edi+eax*8+0x244]
100c1cff:	25 7f fe ff ff       	and    eax,0xfffffe7f
100c1d04:	83 c8 08             	or     eax,0x8
100c1d07:	89 85 e8 fe ff ff    	mov    DWORD PTR [ebp-0x118],eax
100c1d0d:	8b 07                	mov    eax,DWORD PTR [edi]
100c1d0f:	ff 90 58 01 00 00    	call   DWORD PTR [eax+0x158]
100c1d15:	83 f8 02             	cmp    eax,0x2
100c1d18:	75 28                	jne    0x100c1d42
100c1d1a:	8b 8d f4 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x10c]
100c1d20:	f3 0f 7e 85 d8 fe ff 	movq   xmm0,QWORD PTR [ebp-0x128]
100c1d27:	ff 
100c1d28:	8b 95 e8 fe ff ff    	mov    edx,DWORD PTR [ebp-0x118]
100c1d2e:	8b 85 e0 fe ff ff    	mov    eax,DWORD PTR [ebp-0x120]
100c1d34:	66 0f d6 06          	movq   QWORD PTR [esi],xmm0
100c1d38:	89 11                	mov    DWORD PTR [ecx],edx
100c1d3a:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
100c1d3d:	e9 97 00 00 00       	jmp    0x100c1dd9
100c1d42:	8b 07                	mov    eax,DWORD PTR [edi]
100c1d44:	8d 8d d8 fe ff ff    	lea    ecx,[ebp-0x128]
100c1d4a:	6a 00                	push   0x0
100c1d4c:	ff b5 e4 fe ff ff    	push   DWORD PTR [ebp-0x11c]
100c1d52:	51                   	push   ecx
100c1d53:	8d 8d bc fe ff ff    	lea    ecx,[ebp-0x144]
100c1d59:	51                   	push   ecx
100c1d5a:	8b cf                	mov    ecx,edi
100c1d5c:	ff 90 58 01 00 00    	call   DWORD PTR [eax+0x158]
100c1d62:	8b 8d f4 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x10c]
100c1d68:	83 f8 02             	cmp    eax,0x2
100c1d6b:	75 53                	jne    0x100c1dc0
100c1d6d:	f3 0f 7e 85 bc fe ff 	movq   xmm0,QWORD PTR [ebp-0x144]
100c1d74:	ff 
100c1d75:	43                   	inc    ebx
100c1d76:	8b 85 c4 fe ff ff    	mov    eax,DWORD PTR [ebp-0x13c]
100c1d7c:	8b 95 e8 fe ff ff    	mov    edx,DWORD PTR [ebp-0x118]
100c1d82:	66 0f d6 06          	movq   QWORD PTR [esi],xmm0
100c1d86:	f3 0f 7e 85 d8 fe ff 	movq   xmm0,QWORD PTR [ebp-0x128]
100c1d8d:	ff 
100c1d8e:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
100c1d91:	8b 85 f8 fe ff ff    	mov    eax,DWORD PTR [ebp-0x108]
100c1d97:	83 85 f8 fe ff ff 10 	add    DWORD PTR [ebp-0x108],0x10
100c1d9e:	89 11                	mov    DWORD PTR [ecx],edx
100c1da0:	83 c1 10             	add    ecx,0x10
100c1da3:	89 10                	mov    DWORD PTR [eax],edx
100c1da5:	8b 95 f0 fe ff ff    	mov    edx,DWORD PTR [ebp-0x110]
100c1dab:	8b 85 e0 fe ff ff    	mov    eax,DWORD PTR [ebp-0x120]
100c1db1:	66 0f d6 02          	movq   QWORD PTR [edx],xmm0
100c1db5:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
100c1db8:	83 c2 10             	add    edx,0x10
100c1dbb:	83 c6 10             	add    esi,0x10
100c1dbe:	eb 1f                	jmp    0x100c1ddf
100c1dc0:	8b 87 bc 02 00 00    	mov    eax,DWORD PTR [edi+0x2bc]
100c1dc6:	03 85 ec fe ff ff    	add    eax,DWORD PTR [ebp-0x114]
100c1dcc:	03 c0                	add    eax,eax
100c1dce:	0f 10 84 c7 38 02 00 	movups xmm0,XMMWORD PTR [edi+eax*8+0x238]
100c1dd5:	00 
100c1dd6:	0f 11 06             	movups XMMWORD PTR [esi],xmm0
100c1dd9:	8b 95 f0 fe ff ff    	mov    edx,DWORD PTR [ebp-0x110]
100c1ddf:	f3 0f 7e 06          	movq   xmm0,QWORD PTR [esi]
100c1de3:	83 c1 10             	add    ecx,0x10
100c1de6:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100c1de9:	83 c2 10             	add    edx,0x10
100c1dec:	83 85 f8 fe ff ff 10 	add    DWORD PTR [ebp-0x108],0x10
100c1df3:	43                   	inc    ebx
100c1df4:	66 0f d6 85 cc fe ff 	movq   QWORD PTR [ebp-0x134],xmm0
100c1dfb:	ff 
100c1dfc:	83 c6 10             	add    esi,0x10
100c1dff:	89 85 d4 fe ff ff    	mov    DWORD PTR [ebp-0x12c],eax
100c1e05:	89 8d f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],ecx
100c1e0b:	89 95 f0 fe ff ff    	mov    DWORD PTR [ebp-0x110],edx
100c1e11:	8b 8d ec fe ff ff    	mov    ecx,DWORD PTR [ebp-0x114]
100c1e17:	41                   	inc    ecx
100c1e18:	89 8d ec fe ff ff    	mov    DWORD PTR [ebp-0x114],ecx
100c1e1e:	3b 8d c8 fe ff ff    	cmp    ecx,DWORD PTR [ebp-0x138]
100c1e24:	0f 8c 66 fd ff ff    	jl     0x100c1b90
100c1e2a:	8b 8f bc 02 00 00    	mov    ecx,DWORD PTR [edi+0x2bc]
100c1e30:	8d 97 38 02 00 00    	lea    edx,[edi+0x238]
100c1e36:	03 8d ec fe ff ff    	add    ecx,DWORD PTR [ebp-0x114]
100c1e3c:	8b c3                	mov    eax,ebx
100c1e3e:	03 c9                	add    ecx,ecx
100c1e40:	03 c0                	add    eax,eax
100c1e42:	43                   	inc    ebx
100c1e43:	0f 10 84 cf 38 02 00 	movups xmm0,XMMWORD PTR [edi+ecx*8+0x238]
100c1e4a:	00 
100c1e4b:	c7 87 bc 02 00 00 00 	mov    DWORD PTR [edi+0x2bc],0x0
100c1e52:	00 00 00 
100c1e55:	8d 8d fc fe ff ff    	lea    ecx,[ebp-0x104]
100c1e5b:	0f 11 84 c5 fc fe ff 	movups XMMWORD PTR [ebp+eax*8-0x104],xmm0
100c1e62:	ff 
100c1e63:	8b c3                	mov    eax,ebx
100c1e65:	03 c0                	add    eax,eax
100c1e67:	c7 84 c5 08 ff ff ff 	mov    DWORD PTR [ebp+eax*8-0xf8],0x0
100c1e6e:	00 00 00 00 
100c1e72:	33 c0                	xor    eax,eax
100c1e74:	3b c3                	cmp    eax,ebx
100c1e76:	7d 25                	jge    0x100c1e9d
100c1e78:	0f 10 01             	movups xmm0,XMMWORD PTR [ecx]
100c1e7b:	40                   	inc    eax
100c1e7c:	83 c1 10             	add    ecx,0x10
100c1e7f:	0f 11 02             	movups XMMWORD PTR [edx],xmm0
100c1e82:	83 c2 10             	add    edx,0x10
100c1e85:	83 f8 08             	cmp    eax,0x8
100c1e88:	7c ea                	jl     0x100c1e74
100c1e8a:	5b                   	pop    ebx
100c1e8b:	5f                   	pop    edi
100c1e8c:	5e                   	pop    esi
100c1e8d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100c1e90:	33 cd                	xor    ecx,ebp
100c1e92:	e8 1c bd 07 00       	call   0x1013dbb3
100c1e97:	8b e5                	mov    esp,ebp
100c1e99:	5d                   	pop    ebp
100c1e9a:	c2 04 00             	ret    0x4
100c1e9d:	03 c0                	add    eax,eax
100c1e9f:	5b                   	pop    ebx
100c1ea0:	c7 84 c7 44 02 00 00 	mov    DWORD PTR [edi+eax*8+0x244],0x0
100c1ea7:	00 00 00 00 
100c1eab:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100c1eae:	5f                   	pop    edi
100c1eaf:	33 cd                	xor    ecx,ebp
100c1eb1:	5e                   	pop    esi
100c1eb2:	e8 fc bc 07 00       	call   0x1013dbb3
100c1eb7:	8b e5                	mov    esp,ebp
100c1eb9:	5d                   	pop    ebp
100c1eba:	c2 04 00             	ret    0x4
