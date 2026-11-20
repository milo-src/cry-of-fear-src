
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100018f0 <.text+0x8f0>:
100018f0:	55                   	push   ebp
100018f1:	8b ec                	mov    ebp,esp
100018f3:	81 ec 08 01 00 00    	sub    esp,0x108
100018f9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100018fe:	33 c5                	xor    eax,ebp
10001900:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10001903:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10001906:	56                   	push   esi
10001907:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
1000190d:	3b 86 4c 02 00 00    	cmp    eax,DWORD PTR [esi+0x24c]
10001913:	0f 8d f1 0a 00 00    	jge    0x1000240a
10001919:	85 c0                	test   eax,eax
1000191b:	0f 8e e9 0a 00 00    	jle    0x1000240a
10001921:	57                   	push   edi
10001922:	69 f8 e0 00 00 00    	imul   edi,eax,0xe0
10001928:	8b 84 37 80 02 00 00 	mov    eax,DWORD PTR [edi+esi*1+0x280]
1000192f:	85 c0                	test   eax,eax
10001931:	0f 84 e4 09 00 00    	je     0x1000231b
10001937:	f3 0f 10 84 37 74 02 	movss  xmm0,DWORD PTR [edi+esi*1+0x274]
1000193e:	00 00 
10001940:	8d 8d 60 ff ff ff    	lea    ecx,[ebp-0xa0]
10001946:	51                   	push   ecx
10001947:	f3 0f 11 85 44 ff ff 	movss  DWORD PTR [ebp-0xbc],xmm0
1000194e:	ff 
1000194f:	8d 8d 6c ff ff ff    	lea    ecx,[ebp-0x94]
10001955:	f3 0f 10 84 37 78 02 	movss  xmm0,DWORD PTR [edi+esi*1+0x278]
1000195c:	00 00 
1000195e:	51                   	push   ecx
1000195f:	f3 0f 11 85 5c ff ff 	movss  DWORD PTR [ebp-0xa4],xmm0
10001966:	ff 
10001967:	f3 0f 10 84 37 7c 02 	movss  xmm0,DWORD PTR [edi+esi*1+0x27c]
1000196e:	00 00 
10001970:	50                   	push   eax
10001971:	8b 86 98 f5 04 00    	mov    eax,DWORD PTR [esi+0x4f598]
10001977:	f3 0f 11 85 f8 fe ff 	movss  DWORD PTR [ebp-0x108],xmm0
1000197e:	ff 
1000197f:	ff d0                	call   eax
10001981:	f3 0f 10 b5 64 ff ff 	movss  xmm6,DWORD PTR [ebp-0x9c]
10001988:	ff 
10001989:	8d 4d 88             	lea    ecx,[ebp-0x78]
1000198c:	f3 0f 10 a5 60 ff ff 	movss  xmm4,DWORD PTR [ebp-0xa0]
10001993:	ff 
10001994:	83 c4 0c             	add    esp,0xc
10001997:	f3 0f 10 bd 70 ff ff 	movss  xmm7,DWORD PTR [ebp-0x90]
1000199e:	ff 
1000199f:	33 c0                	xor    eax,eax
100019a1:	f3 0f 10 ad 6c ff ff 	movss  xmm5,DWORD PTR [ebp-0x94]
100019a8:	ff 
100019a9:	0f 57 c9             	xorps  xmm1,xmm1
100019ac:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100019b0:	a8 01                	test   al,0x1
100019b2:	74 09                	je     0x100019bd
100019b4:	0f 28 d5             	movaps xmm2,xmm5
100019b7:	f3 0f 5c d1          	subss  xmm2,xmm1
100019bb:	eb 07                	jmp    0x100019c4
100019bd:	0f 28 d4             	movaps xmm2,xmm4
100019c0:	f3 0f 58 d1          	addss  xmm2,xmm1
100019c4:	a8 02                	test   al,0x2
100019c6:	74 09                	je     0x100019d1
100019c8:	0f 28 df             	movaps xmm3,xmm7
100019cb:	f3 0f 5c d9          	subss  xmm3,xmm1
100019cf:	eb 07                	jmp    0x100019d8
100019d1:	0f 28 de             	movaps xmm3,xmm6
100019d4:	f3 0f 58 d9          	addss  xmm3,xmm1
100019d8:	a8 04                	test   al,0x4
100019da:	74 0e                	je     0x100019ea
100019dc:	f3 0f 10 85 74 ff ff 	movss  xmm0,DWORD PTR [ebp-0x8c]
100019e3:	ff 
100019e4:	f3 0f 5c c1          	subss  xmm0,xmm1
100019e8:	eb 0c                	jmp    0x100019f6
100019ea:	f3 0f 10 85 68 ff ff 	movss  xmm0,DWORD PTR [ebp-0x98]
100019f1:	ff 
100019f2:	f3 0f 58 c1          	addss  xmm0,xmm1
100019f6:	f3 0f 11 51 fc       	movss  DWORD PTR [ecx-0x4],xmm2
100019fb:	40                   	inc    eax
100019fc:	f3 0f 11 19          	movss  DWORD PTR [ecx],xmm3
10001a00:	f3 0f 11 41 04       	movss  DWORD PTR [ecx+0x4],xmm0
10001a05:	83 c1 0c             	add    ecx,0xc
10001a08:	83 f8 08             	cmp    eax,0x8
10001a0b:	7c a3                	jl     0x100019b0
10001a0d:	8d 8e a4 02 00 00    	lea    ecx,[esi+0x2a4]
10001a13:	03 cf                	add    ecx,edi
10001a15:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
10001a19:	0f 2e c1             	ucomiss xmm0,xmm1
10001a1c:	9f                   	lahf
10001a1d:	f6 c4 44             	test   ah,0x44
10001a20:	0f 8a 31 01 00 00    	jp     0x10001b57
10001a26:	f3 0f 10 84 37 a8 02 	movss  xmm0,DWORD PTR [edi+esi*1+0x2a8]
10001a2d:	00 00 
10001a2f:	0f 2e c1             	ucomiss xmm0,xmm1
10001a32:	9f                   	lahf
10001a33:	f6 c4 44             	test   ah,0x44
10001a36:	0f 8a 1b 01 00 00    	jp     0x10001b57
10001a3c:	f3 0f 10 84 37 ac 02 	movss  xmm0,DWORD PTR [edi+esi*1+0x2ac]
10001a43:	00 00 
10001a45:	0f 2e c1             	ucomiss xmm0,xmm1
10001a48:	9f                   	lahf
10001a49:	f6 c4 44             	test   ah,0x44
10001a4c:	0f 8a 05 01 00 00    	jp     0x10001b57
10001a52:	f3 0f 10 45 cc       	movss  xmm0,DWORD PTR [ebp-0x34]
10001a57:	f3 0f 11 85 08 ff ff 	movss  DWORD PTR [ebp-0xf8],xmm0
10001a5e:	ff 
10001a5f:	f3 0f 10 45 c8       	movss  xmm0,DWORD PTR [ebp-0x38]
10001a64:	f3 0f 11 85 18 ff ff 	movss  DWORD PTR [ebp-0xe8],xmm0
10001a6b:	ff 
10001a6c:	f3 0f 10 45 c4       	movss  xmm0,DWORD PTR [ebp-0x3c]
10001a71:	f3 0f 11 85 48 ff ff 	movss  DWORD PTR [ebp-0xb8],xmm0
10001a78:	ff 
10001a79:	f3 0f 10 45 c0       	movss  xmm0,DWORD PTR [ebp-0x40]
10001a7e:	f3 0f 11 85 1c ff ff 	movss  DWORD PTR [ebp-0xe4],xmm0
10001a85:	ff 
10001a86:	f3 0f 10 45 bc       	movss  xmm0,DWORD PTR [ebp-0x44]
10001a8b:	f3 0f 11 85 20 ff ff 	movss  DWORD PTR [ebp-0xe0],xmm0
10001a92:	ff 
10001a93:	f3 0f 10 45 b8       	movss  xmm0,DWORD PTR [ebp-0x48]
10001a98:	f3 0f 11 85 4c ff ff 	movss  DWORD PTR [ebp-0xb4],xmm0
10001a9f:	ff 
10001aa0:	f3 0f 10 45 b4       	movss  xmm0,DWORD PTR [ebp-0x4c]
10001aa5:	f3 0f 11 85 24 ff ff 	movss  DWORD PTR [ebp-0xdc],xmm0
10001aac:	ff 
10001aad:	f3 0f 10 45 b0       	movss  xmm0,DWORD PTR [ebp-0x50]
10001ab2:	f3 0f 11 85 28 ff ff 	movss  DWORD PTR [ebp-0xd8],xmm0
10001ab9:	ff 
10001aba:	f3 0f 10 45 ac       	movss  xmm0,DWORD PTR [ebp-0x54]
10001abf:	f3 0f 10 6d e0       	movss  xmm5,DWORD PTR [ebp-0x20]
10001ac4:	f3 0f 10 5d dc       	movss  xmm3,DWORD PTR [ebp-0x24]
10001ac9:	f3 0f 10 65 d8       	movss  xmm4,DWORD PTR [ebp-0x28]
10001ace:	f3 0f 10 75 d4       	movss  xmm6,DWORD PTR [ebp-0x2c]
10001ad3:	f3 0f 10 7d d0       	movss  xmm7,DWORD PTR [ebp-0x30]
10001ad8:	f3 0f 10 55 88       	movss  xmm2,DWORD PTR [ebp-0x78]
10001add:	f3 0f 10 4d 84       	movss  xmm1,DWORD PTR [ebp-0x7c]
10001ae2:	f3 0f 11 85 50 ff ff 	movss  DWORD PTR [ebp-0xb0],xmm0
10001ae9:	ff 
10001aea:	f3 0f 10 45 a8       	movss  xmm0,DWORD PTR [ebp-0x58]
10001aef:	f3 0f 11 85 2c ff ff 	movss  DWORD PTR [ebp-0xd4],xmm0
10001af6:	ff 
10001af7:	f3 0f 10 45 a4       	movss  xmm0,DWORD PTR [ebp-0x5c]
10001afc:	f3 0f 11 85 30 ff ff 	movss  DWORD PTR [ebp-0xd0],xmm0
10001b03:	ff 
10001b04:	f3 0f 10 45 a0       	movss  xmm0,DWORD PTR [ebp-0x60]
10001b09:	f3 0f 11 85 54 ff ff 	movss  DWORD PTR [ebp-0xac],xmm0
10001b10:	ff 
10001b11:	f3 0f 10 45 9c       	movss  xmm0,DWORD PTR [ebp-0x64]
10001b16:	f3 0f 11 85 34 ff ff 	movss  DWORD PTR [ebp-0xcc],xmm0
10001b1d:	ff 
10001b1e:	f3 0f 10 45 98       	movss  xmm0,DWORD PTR [ebp-0x68]
10001b23:	f3 0f 11 85 38 ff ff 	movss  DWORD PTR [ebp-0xc8],xmm0
10001b2a:	ff 
10001b2b:	f3 0f 10 45 94       	movss  xmm0,DWORD PTR [ebp-0x6c]
10001b30:	f3 0f 11 85 58 ff ff 	movss  DWORD PTR [ebp-0xa8],xmm0
10001b37:	ff 
10001b38:	f3 0f 10 45 90       	movss  xmm0,DWORD PTR [ebp-0x70]
10001b3d:	f3 0f 11 85 3c ff ff 	movss  DWORD PTR [ebp-0xc4],xmm0
10001b44:	ff 
10001b45:	f3 0f 10 45 8c       	movss  xmm0,DWORD PTR [ebp-0x74]
10001b4a:	f3 0f 11 85 40 ff ff 	movss  DWORD PTR [ebp-0xc0],xmm0
10001b51:	ff 
10001b52:	e9 4d 05 00 00       	jmp    0x100020a4
10001b57:	8d 85 78 ff ff ff    	lea    eax,[ebp-0x88]
10001b5d:	50                   	push   eax
10001b5e:	8d 45 e4             	lea    eax,[ebp-0x1c]
10001b61:	50                   	push   eax
10001b62:	8d 45 f0             	lea    eax,[ebp-0x10]
10001b65:	50                   	push   eax
10001b66:	51                   	push   ecx
10001b67:	e8 34 11 00 00       	call   0x10002ca0
10001b6c:	f3 0f 10 5d 84       	movss  xmm3,DWORD PTR [ebp-0x7c]
10001b71:	83 c4 10             	add    esp,0x10
10001b74:	f3 0f 10 55 88       	movss  xmm2,DWORD PTR [ebp-0x78]
10001b79:	f3 0f 10 65 f4       	movss  xmm4,DWORD PTR [ebp-0xc]
10001b7e:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10001b83:	f3 0f 10 4d 8c       	movss  xmm1,DWORD PTR [ebp-0x74]
10001b88:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001b8c:	f3 0f 59 e2          	mulss  xmm4,xmm2
10001b90:	f3 0f 10 6d ec       	movss  xmm5,DWORD PTR [ebp-0x14]
10001b95:	f3 0f 10 bd 78 ff ff 	movss  xmm7,DWORD PTR [ebp-0x88]
10001b9c:	ff 
10001b9d:	f3 0f 58 e0          	addss  xmm4,xmm0
10001ba1:	f3 0f 10 75 f4       	movss  xmm6,DWORD PTR [ebp-0xc]
10001ba6:	0f 28 c1             	movaps xmm0,xmm1
10001ba9:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
10001bae:	f3 0f 58 e0          	addss  xmm4,xmm0
10001bb2:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10001bb7:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001bbb:	f3 0f 11 a5 fc fe ff 	movss  DWORD PTR [ebp-0x104],xmm4
10001bc2:	ff 
10001bc3:	f3 0f 10 65 e8       	movss  xmm4,DWORD PTR [ebp-0x18]
10001bc8:	f3 0f 59 e2          	mulss  xmm4,xmm2
10001bcc:	f3 0f 58 e0          	addss  xmm4,xmm0
10001bd0:	0f 28 c1             	movaps xmm0,xmm1
10001bd3:	f3 0f 59 c5          	mulss  xmm0,xmm5
10001bd7:	f3 0f 58 e0          	addss  xmm4,xmm0
10001bdb:	0f 28 c7             	movaps xmm0,xmm7
10001bde:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001be2:	f3 0f 10 5d 90       	movss  xmm3,DWORD PTR [ebp-0x70]
10001be7:	f3 0f 11 a5 00 ff ff 	movss  DWORD PTR [ebp-0x100],xmm4
10001bee:	ff 
10001bef:	f3 0f 10 a5 7c ff ff 	movss  xmm4,DWORD PTR [ebp-0x84]
10001bf6:	ff 
10001bf7:	f3 0f 59 e2          	mulss  xmm4,xmm2
10001bfb:	f3 0f 10 55 94       	movss  xmm2,DWORD PTR [ebp-0x6c]
10001c00:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001c04:	f3 0f 58 e0          	addss  xmm4,xmm0
10001c08:	f3 0f 11 a5 40 ff ff 	movss  DWORD PTR [ebp-0xc0],xmm4
10001c0f:	ff 
10001c10:	f3 0f 10 65 80       	movss  xmm4,DWORD PTR [ebp-0x80]
10001c15:	f3 0f 10 85 40 ff ff 	movss  xmm0,DWORD PTR [ebp-0xc0]
10001c1c:	ff 
10001c1d:	f3 0f 59 cc          	mulss  xmm1,xmm4
10001c21:	f3 0f 58 c1          	addss  xmm0,xmm1
10001c25:	f3 0f 10 4d 98       	movss  xmm1,DWORD PTR [ebp-0x68]
10001c2a:	f3 0f 11 85 40 ff ff 	movss  DWORD PTR [ebp-0xc0],xmm0
10001c31:	ff 
10001c32:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10001c37:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001c3b:	f3 0f 58 f0          	addss  xmm6,xmm0
10001c3f:	0f 28 c1             	movaps xmm0,xmm1
10001c42:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
10001c47:	f3 0f 58 f0          	addss  xmm6,xmm0
10001c4b:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
10001c50:	f3 0f 59 c2          	mulss  xmm0,xmm2
10001c54:	f3 0f 11 85 58 ff ff 	movss  DWORD PTR [ebp-0xa8],xmm0
10001c5b:	ff 
10001c5c:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10001c61:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001c65:	f3 0f 11 b5 3c ff ff 	movss  DWORD PTR [ebp-0xc4],xmm6
10001c6c:	ff 
10001c6d:	f3 0f 10 b5 58 ff ff 	movss  xmm6,DWORD PTR [ebp-0xa8]
10001c74:	ff 
10001c75:	f3 0f 58 f0          	addss  xmm6,xmm0
10001c79:	0f 28 c1             	movaps xmm0,xmm1
10001c7c:	f3 0f 59 c5          	mulss  xmm0,xmm5
10001c80:	f3 0f 59 cc          	mulss  xmm1,xmm4
10001c84:	f3 0f 58 f0          	addss  xmm6,xmm0
10001c88:	f3 0f 10 85 7c ff ff 	movss  xmm0,DWORD PTR [ebp-0x84]
10001c8f:	ff 
10001c90:	f3 0f 11 85 38 ff ff 	movss  DWORD PTR [ebp-0xc8],xmm0
10001c97:	ff 
10001c98:	f3 0f 11 b5 58 ff ff 	movss  DWORD PTR [ebp-0xa8],xmm6
10001c9f:	ff 
10001ca0:	0f 28 f0             	movaps xmm6,xmm0
10001ca3:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001ca7:	0f 28 c7             	movaps xmm0,xmm7
10001caa:	f3 0f 10 55 a0       	movss  xmm2,DWORD PTR [ebp-0x60]
10001caf:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001cb3:	f3 0f 10 5d 9c       	movss  xmm3,DWORD PTR [ebp-0x64]
10001cb8:	f3 0f 58 f0          	addss  xmm6,xmm0
10001cbc:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10001cc1:	f3 0f 58 f1          	addss  xmm6,xmm1
10001cc5:	f3 0f 11 b5 38 ff ff 	movss  DWORD PTR [ebp-0xc8],xmm6
10001ccc:	ff 
10001ccd:	f3 0f 10 75 f4       	movss  xmm6,DWORD PTR [ebp-0xc]
10001cd2:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001cd6:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001cda:	f3 0f 10 4d a4       	movss  xmm1,DWORD PTR [ebp-0x5c]
10001cdf:	f3 0f 58 f0          	addss  xmm6,xmm0
10001ce3:	0f 28 c1             	movaps xmm0,xmm1
10001ce6:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
10001ceb:	f3 0f 58 f0          	addss  xmm6,xmm0
10001cef:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
10001cf4:	f3 0f 59 c2          	mulss  xmm0,xmm2
10001cf8:	f3 0f 11 85 54 ff ff 	movss  DWORD PTR [ebp-0xac],xmm0
10001cff:	ff 
10001d00:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10001d05:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001d09:	f3 0f 11 b5 34 ff ff 	movss  DWORD PTR [ebp-0xcc],xmm6
10001d10:	ff 
10001d11:	f3 0f 10 b5 54 ff ff 	movss  xmm6,DWORD PTR [ebp-0xac]
10001d18:	ff 
10001d19:	f3 0f 58 f0          	addss  xmm6,xmm0
10001d1d:	0f 28 c1             	movaps xmm0,xmm1
10001d20:	f3 0f 59 c5          	mulss  xmm0,xmm5
10001d24:	f3 0f 59 cc          	mulss  xmm1,xmm4
10001d28:	f3 0f 58 f0          	addss  xmm6,xmm0
10001d2c:	f3 0f 10 85 7c ff ff 	movss  xmm0,DWORD PTR [ebp-0x84]
10001d33:	ff 
10001d34:	f3 0f 11 85 30 ff ff 	movss  DWORD PTR [ebp-0xd0],xmm0
10001d3b:	ff 
10001d3c:	f3 0f 11 b5 54 ff ff 	movss  DWORD PTR [ebp-0xac],xmm6
10001d43:	ff 
10001d44:	0f 28 f0             	movaps xmm6,xmm0
10001d47:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001d4b:	0f 28 c7             	movaps xmm0,xmm7
10001d4e:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001d52:	f3 0f 10 5d a8       	movss  xmm3,DWORD PTR [ebp-0x58]
10001d57:	f3 0f 10 55 ac       	movss  xmm2,DWORD PTR [ebp-0x54]
10001d5c:	f3 0f 58 f0          	addss  xmm6,xmm0
10001d60:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10001d65:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001d69:	f3 0f 58 f1          	addss  xmm6,xmm1
10001d6d:	f3 0f 10 4d b0       	movss  xmm1,DWORD PTR [ebp-0x50]
10001d72:	f3 0f 11 b5 30 ff ff 	movss  DWORD PTR [ebp-0xd0],xmm6
10001d79:	ff 
10001d7a:	f3 0f 10 75 f4       	movss  xmm6,DWORD PTR [ebp-0xc]
10001d7f:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001d83:	f3 0f 58 f0          	addss  xmm6,xmm0
10001d87:	0f 28 c1             	movaps xmm0,xmm1
10001d8a:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
10001d8f:	f3 0f 58 f0          	addss  xmm6,xmm0
10001d93:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
10001d98:	f3 0f 59 c2          	mulss  xmm0,xmm2
10001d9c:	f3 0f 11 85 50 ff ff 	movss  DWORD PTR [ebp-0xb0],xmm0
10001da3:	ff 
10001da4:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10001da9:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001dad:	f3 0f 11 b5 2c ff ff 	movss  DWORD PTR [ebp-0xd4],xmm6
10001db4:	ff 
10001db5:	f3 0f 10 b5 50 ff ff 	movss  xmm6,DWORD PTR [ebp-0xb0]
10001dbc:	ff 
10001dbd:	f3 0f 58 f0          	addss  xmm6,xmm0
10001dc1:	0f 28 c1             	movaps xmm0,xmm1
10001dc4:	f3 0f 59 c5          	mulss  xmm0,xmm5
10001dc8:	f3 0f 59 cc          	mulss  xmm1,xmm4
10001dcc:	f3 0f 58 f0          	addss  xmm6,xmm0
10001dd0:	f3 0f 10 85 7c ff ff 	movss  xmm0,DWORD PTR [ebp-0x84]
10001dd7:	ff 
10001dd8:	f3 0f 11 85 28 ff ff 	movss  DWORD PTR [ebp-0xd8],xmm0
10001ddf:	ff 
10001de0:	f3 0f 11 b5 50 ff ff 	movss  DWORD PTR [ebp-0xb0],xmm6
10001de7:	ff 
10001de8:	0f 28 f0             	movaps xmm6,xmm0
10001deb:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001def:	0f 28 c7             	movaps xmm0,xmm7
10001df2:	f3 0f 10 55 b8       	movss  xmm2,DWORD PTR [ebp-0x48]
10001df7:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001dfb:	f3 0f 10 5d b4       	movss  xmm3,DWORD PTR [ebp-0x4c]
10001e00:	f3 0f 58 f0          	addss  xmm6,xmm0
10001e04:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10001e09:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001e0d:	f3 0f 58 f1          	addss  xmm6,xmm1
10001e11:	f3 0f 10 4d bc       	movss  xmm1,DWORD PTR [ebp-0x44]
10001e16:	f3 0f 11 b5 28 ff ff 	movss  DWORD PTR [ebp-0xd8],xmm6
10001e1d:	ff 
10001e1e:	f3 0f 10 75 f4       	movss  xmm6,DWORD PTR [ebp-0xc]
10001e23:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001e27:	f3 0f 58 f0          	addss  xmm6,xmm0
10001e2b:	0f 28 c1             	movaps xmm0,xmm1
10001e2e:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
10001e33:	f3 0f 58 f0          	addss  xmm6,xmm0
10001e37:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
10001e3c:	f3 0f 59 c2          	mulss  xmm0,xmm2
10001e40:	f3 0f 11 85 4c ff ff 	movss  DWORD PTR [ebp-0xb4],xmm0
10001e47:	ff 
10001e48:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10001e4d:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001e51:	f3 0f 11 b5 24 ff ff 	movss  DWORD PTR [ebp-0xdc],xmm6
10001e58:	ff 
10001e59:	f3 0f 10 b5 4c ff ff 	movss  xmm6,DWORD PTR [ebp-0xb4]
10001e60:	ff 
10001e61:	f3 0f 58 f0          	addss  xmm6,xmm0
10001e65:	0f 28 c1             	movaps xmm0,xmm1
10001e68:	f3 0f 59 c5          	mulss  xmm0,xmm5
10001e6c:	f3 0f 59 cc          	mulss  xmm1,xmm4
10001e70:	f3 0f 58 f0          	addss  xmm6,xmm0
10001e74:	f3 0f 10 85 7c ff ff 	movss  xmm0,DWORD PTR [ebp-0x84]
10001e7b:	ff 
10001e7c:	f3 0f 11 85 20 ff ff 	movss  DWORD PTR [ebp-0xe0],xmm0
10001e83:	ff 
10001e84:	f3 0f 11 b5 4c ff ff 	movss  DWORD PTR [ebp-0xb4],xmm6
10001e8b:	ff 
10001e8c:	0f 28 f0             	movaps xmm6,xmm0
10001e8f:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001e93:	0f 28 c7             	movaps xmm0,xmm7
10001e96:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001e9a:	f3 0f 10 5d c0       	movss  xmm3,DWORD PTR [ebp-0x40]
10001e9f:	f3 0f 10 55 c4       	movss  xmm2,DWORD PTR [ebp-0x3c]
10001ea4:	f3 0f 58 f0          	addss  xmm6,xmm0
10001ea8:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
10001ead:	f3 0f 59 c2          	mulss  xmm0,xmm2
10001eb1:	f3 0f 58 f1          	addss  xmm6,xmm1
10001eb5:	f3 0f 10 4d c8       	movss  xmm1,DWORD PTR [ebp-0x38]
10001eba:	f3 0f 11 b5 20 ff ff 	movss  DWORD PTR [ebp-0xe0],xmm6
10001ec1:	ff 
10001ec2:	f3 0f 10 75 f0       	movss  xmm6,DWORD PTR [ebp-0x10]
10001ec7:	f3 0f 59 f3          	mulss  xmm6,xmm3
10001ecb:	f3 0f 58 f0          	addss  xmm6,xmm0
10001ecf:	0f 28 c1             	movaps xmm0,xmm1
10001ed2:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
10001ed7:	f3 0f 58 f0          	addss  xmm6,xmm0
10001edb:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10001ee0:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001ee4:	f3 0f 11 85 48 ff ff 	movss  DWORD PTR [ebp-0xb8],xmm0
10001eeb:	ff 
10001eec:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
10001ef1:	f3 0f 59 c2          	mulss  xmm0,xmm2
10001ef5:	f3 0f 11 b5 1c ff ff 	movss  DWORD PTR [ebp-0xe4],xmm6
10001efc:	ff 
10001efd:	f3 0f 10 b5 48 ff ff 	movss  xmm6,DWORD PTR [ebp-0xb8]
10001f04:	ff 
10001f05:	f3 0f 58 f0          	addss  xmm6,xmm0
10001f09:	0f 28 c1             	movaps xmm0,xmm1
10001f0c:	f3 0f 59 c5          	mulss  xmm0,xmm5
10001f10:	f3 0f 59 cc          	mulss  xmm1,xmm4
10001f14:	f3 0f 58 f0          	addss  xmm6,xmm0
10001f18:	f3 0f 10 85 7c ff ff 	movss  xmm0,DWORD PTR [ebp-0x84]
10001f1f:	ff 
10001f20:	f3 0f 11 85 18 ff ff 	movss  DWORD PTR [ebp-0xe8],xmm0
10001f27:	ff 
10001f28:	f3 0f 11 b5 48 ff ff 	movss  DWORD PTR [ebp-0xb8],xmm6
10001f2f:	ff 
10001f30:	0f 28 f0             	movaps xmm6,xmm0
10001f33:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001f37:	0f 28 c7             	movaps xmm0,xmm7
10001f3a:	f3 0f 10 55 d0       	movss  xmm2,DWORD PTR [ebp-0x30]
10001f3f:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001f43:	f3 0f 10 5d cc       	movss  xmm3,DWORD PTR [ebp-0x34]
10001f48:	f3 0f 58 f0          	addss  xmm6,xmm0
10001f4c:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10001f51:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001f55:	f3 0f 58 f1          	addss  xmm6,xmm1
10001f59:	f3 0f 10 4d d4       	movss  xmm1,DWORD PTR [ebp-0x2c]
10001f5e:	f3 0f 11 b5 18 ff ff 	movss  DWORD PTR [ebp-0xe8],xmm6
10001f65:	ff 
10001f66:	f3 0f 10 75 f4       	movss  xmm6,DWORD PTR [ebp-0xc]
10001f6b:	f3 0f 59 f2          	mulss  xmm6,xmm2
10001f6f:	f3 0f 58 f0          	addss  xmm6,xmm0
10001f73:	0f 28 c1             	movaps xmm0,xmm1
10001f76:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
10001f7b:	f3 0f 58 f0          	addss  xmm6,xmm0
10001f7f:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
10001f84:	f3 0f 59 c2          	mulss  xmm0,xmm2
10001f88:	f3 0f 11 85 10 ff ff 	movss  DWORD PTR [ebp-0xf0],xmm0
10001f8f:	ff 
10001f90:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10001f95:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001f99:	f3 0f 11 b5 08 ff ff 	movss  DWORD PTR [ebp-0xf8],xmm6
10001fa0:	ff 
10001fa1:	f3 0f 10 b5 10 ff ff 	movss  xmm6,DWORD PTR [ebp-0xf0]
10001fa8:	ff 
10001fa9:	f3 0f 58 f0          	addss  xmm6,xmm0
10001fad:	0f 28 c1             	movaps xmm0,xmm1
10001fb0:	f3 0f 59 c5          	mulss  xmm0,xmm5
10001fb4:	f3 0f 59 cc          	mulss  xmm1,xmm4
10001fb8:	f3 0f 58 f0          	addss  xmm6,xmm0
10001fbc:	f3 0f 10 85 7c ff ff 	movss  xmm0,DWORD PTR [ebp-0x84]
10001fc3:	ff 
10001fc4:	f3 0f 59 c2          	mulss  xmm0,xmm2
10001fc8:	f3 0f 11 85 14 ff ff 	movss  DWORD PTR [ebp-0xec],xmm0
10001fcf:	ff 
10001fd0:	0f 28 c7             	movaps xmm0,xmm7
10001fd3:	f3 0f 10 95 14 ff ff 	movss  xmm2,DWORD PTR [ebp-0xec]
10001fda:	ff 
10001fdb:	f3 0f 59 c3          	mulss  xmm0,xmm3
10001fdf:	f3 0f 11 b5 10 ff ff 	movss  DWORD PTR [ebp-0xf0],xmm6
10001fe6:	ff 
10001fe7:	f3 0f 58 d0          	addss  xmm2,xmm0
10001feb:	f3 0f 10 45 dc       	movss  xmm0,DWORD PTR [ebp-0x24]
10001ff0:	f3 0f 58 d1          	addss  xmm2,xmm1
10001ff4:	f3 0f 11 95 14 ff ff 	movss  DWORD PTR [ebp-0xec],xmm2
10001ffb:	ff 
10001ffc:	f3 0f 10 55 d8       	movss  xmm2,DWORD PTR [ebp-0x28]
10002001:	f3 0f 10 5d f4       	movss  xmm3,DWORD PTR [ebp-0xc]
10002006:	f3 0f 10 4d e0       	movss  xmm1,DWORD PTR [ebp-0x20]
1000200b:	f3 0f 59 d8          	mulss  xmm3,xmm0
1000200f:	f3 0f 11 85 0c ff ff 	movss  DWORD PTR [ebp-0xf4],xmm0
10002016:	ff 
10002017:	0f 28 c2             	movaps xmm0,xmm2
1000201a:	f3 0f 59 45 f0       	mulss  xmm0,DWORD PTR [ebp-0x10]
1000201f:	f3 0f 10 b5 14 ff ff 	movss  xmm6,DWORD PTR [ebp-0xec]
10002026:	ff 
10002027:	f3 0f 59 fa          	mulss  xmm7,xmm2
1000202b:	f3 0f 58 d8          	addss  xmm3,xmm0
1000202f:	0f 28 c1             	movaps xmm0,xmm1
10002032:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
10002037:	f3 0f 58 d8          	addss  xmm3,xmm0
1000203b:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10002040:	f3 0f 59 c2          	mulss  xmm0,xmm2
10002044:	f3 0f 10 95 00 ff ff 	movss  xmm2,DWORD PTR [ebp-0x100]
1000204b:	ff 
1000204c:	f3 0f 11 9d 04 ff ff 	movss  DWORD PTR [ebp-0xfc],xmm3
10002053:	ff 
10002054:	f3 0f 10 5d e8       	movss  xmm3,DWORD PTR [ebp-0x18]
10002059:	f3 0f 59 9d 0c ff ff 	mulss  xmm3,DWORD PTR [ebp-0xf4]
10002060:	ff 
10002061:	f3 0f 58 d8          	addss  xmm3,xmm0
10002065:	0f 28 c1             	movaps xmm0,xmm1
10002068:	f3 0f 59 c5          	mulss  xmm0,xmm5
1000206c:	f3 0f 10 ad 0c ff ff 	movss  xmm5,DWORD PTR [ebp-0xf4]
10002073:	ff 
10002074:	f3 0f 59 ad 7c ff ff 	mulss  xmm5,DWORD PTR [ebp-0x84]
1000207b:	ff 
1000207c:	f3 0f 59 cc          	mulss  xmm1,xmm4
10002080:	f3 0f 58 d8          	addss  xmm3,xmm0
10002084:	f3 0f 10 a5 04 ff ff 	movss  xmm4,DWORD PTR [ebp-0xfc]
1000208b:	ff 
1000208c:	f3 0f 58 ef          	addss  xmm5,xmm7
10002090:	f3 0f 10 bd 10 ff ff 	movss  xmm7,DWORD PTR [ebp-0xf0]
10002097:	ff 
10002098:	f3 0f 58 e9          	addss  xmm5,xmm1
1000209c:	f3 0f 10 8d fc fe ff 	movss  xmm1,DWORD PTR [ebp-0x104]
100020a3:	ff 
100020a4:	f3 0f 58 8d 44 ff ff 	addss  xmm1,DWORD PTR [ebp-0xbc]
100020ab:	ff 
100020ac:	f3 0f 58 95 5c ff ff 	addss  xmm2,DWORD PTR [ebp-0xa4]
100020b3:	ff 
100020b4:	f3 0f 58 bd 5c ff ff 	addss  xmm7,DWORD PTR [ebp-0xa4]
100020bb:	ff 
100020bc:	f3 0f 58 a5 44 ff ff 	addss  xmm4,DWORD PTR [ebp-0xbc]
100020c3:	ff 
100020c4:	f3 0f 11 4d 84       	movss  DWORD PTR [ebp-0x7c],xmm1
100020c9:	f3 0f 10 8d 40 ff ff 	movss  xmm1,DWORD PTR [ebp-0xc0]
100020d0:	ff 
100020d1:	f3 0f 11 55 88       	movss  DWORD PTR [ebp-0x78],xmm2
100020d6:	f3 0f 10 95 f8 fe ff 	movss  xmm2,DWORD PTR [ebp-0x108]
100020dd:	ff 
100020de:	f3 0f 58 ca          	addss  xmm1,xmm2
100020e2:	f3 0f 11 7d d0       	movss  DWORD PTR [ebp-0x30],xmm7
100020e7:	f3 0f 58 f2          	addss  xmm6,xmm2
100020eb:	f3 0f 11 4d 8c       	movss  DWORD PTR [ebp-0x74],xmm1
100020f0:	f3 0f 10 8d 3c ff ff 	movss  xmm1,DWORD PTR [ebp-0xc4]
100020f7:	ff 
100020f8:	f3 0f 58 8d 44 ff ff 	addss  xmm1,DWORD PTR [ebp-0xbc]
100020ff:	ff 
10002100:	f3 0f 11 75 d4       	movss  DWORD PTR [ebp-0x2c],xmm6
10002105:	0f 28 c1             	movaps xmm0,xmm1
10002108:	f3 0f 11 8d 3c ff ff 	movss  DWORD PTR [ebp-0xc4],xmm1
1000210f:	ff 
10002110:	f3 0f 11 45 90       	movss  DWORD PTR [ebp-0x70],xmm0
10002115:	f3 0f 10 85 58 ff ff 	movss  xmm0,DWORD PTR [ebp-0xa8]
1000211c:	ff 
1000211d:	f3 0f 58 85 5c ff ff 	addss  xmm0,DWORD PTR [ebp-0xa4]
10002124:	ff 
10002125:	0f 28 c8             	movaps xmm1,xmm0
10002128:	f3 0f 11 85 58 ff ff 	movss  DWORD PTR [ebp-0xa8],xmm0
1000212f:	ff 
10002130:	f3 0f 11 4d 94       	movss  DWORD PTR [ebp-0x6c],xmm1
10002135:	f3 0f 10 8d 38 ff ff 	movss  xmm1,DWORD PTR [ebp-0xc8]
1000213c:	ff 
1000213d:	f3 0f 58 ca          	addss  xmm1,xmm2
10002141:	f3 0f 11 4d 98       	movss  DWORD PTR [ebp-0x68],xmm1
10002146:	f3 0f 10 8d 34 ff ff 	movss  xmm1,DWORD PTR [ebp-0xcc]
1000214d:	ff 
1000214e:	f3 0f 58 8d 44 ff ff 	addss  xmm1,DWORD PTR [ebp-0xbc]
10002155:	ff 
10002156:	0f 28 c1             	movaps xmm0,xmm1
10002159:	f3 0f 11 8d 34 ff ff 	movss  DWORD PTR [ebp-0xcc],xmm1
10002160:	ff 
10002161:	f3 0f 11 45 9c       	movss  DWORD PTR [ebp-0x64],xmm0
10002166:	f3 0f 10 85 54 ff ff 	movss  xmm0,DWORD PTR [ebp-0xac]
1000216d:	ff 
1000216e:	f3 0f 58 85 5c ff ff 	addss  xmm0,DWORD PTR [ebp-0xa4]
10002175:	ff 
10002176:	0f 28 c8             	movaps xmm1,xmm0
10002179:	f3 0f 11 85 54 ff ff 	movss  DWORD PTR [ebp-0xac],xmm0
10002180:	ff 
10002181:	f3 0f 11 4d a0       	movss  DWORD PTR [ebp-0x60],xmm1
10002186:	f3 0f 10 8d 30 ff ff 	movss  xmm1,DWORD PTR [ebp-0xd0]
1000218d:	ff 
1000218e:	f3 0f 58 ca          	addss  xmm1,xmm2
10002192:	f3 0f 11 4d a4       	movss  DWORD PTR [ebp-0x5c],xmm1
10002197:	f3 0f 10 8d 2c ff ff 	movss  xmm1,DWORD PTR [ebp-0xd4]
1000219e:	ff 
1000219f:	f3 0f 58 8d 44 ff ff 	addss  xmm1,DWORD PTR [ebp-0xbc]
100021a6:	ff 
100021a7:	0f 28 c1             	movaps xmm0,xmm1
100021aa:	f3 0f 11 8d 2c ff ff 	movss  DWORD PTR [ebp-0xd4],xmm1
100021b1:	ff 
100021b2:	f3 0f 11 45 a8       	movss  DWORD PTR [ebp-0x58],xmm0
100021b7:	f3 0f 10 85 50 ff ff 	movss  xmm0,DWORD PTR [ebp-0xb0]
100021be:	ff 
100021bf:	f3 0f 58 85 5c ff ff 	addss  xmm0,DWORD PTR [ebp-0xa4]
100021c6:	ff 
100021c7:	0f 28 c8             	movaps xmm1,xmm0
100021ca:	f3 0f 11 85 50 ff ff 	movss  DWORD PTR [ebp-0xb0],xmm0
100021d1:	ff 
100021d2:	f3 0f 11 4d ac       	movss  DWORD PTR [ebp-0x54],xmm1
100021d7:	f3 0f 10 8d 28 ff ff 	movss  xmm1,DWORD PTR [ebp-0xd8]
100021de:	ff 
100021df:	f3 0f 58 ca          	addss  xmm1,xmm2
100021e3:	f3 0f 11 4d b0       	movss  DWORD PTR [ebp-0x50],xmm1
100021e8:	f3 0f 10 8d 24 ff ff 	movss  xmm1,DWORD PTR [ebp-0xdc]
100021ef:	ff 
100021f0:	f3 0f 58 8d 44 ff ff 	addss  xmm1,DWORD PTR [ebp-0xbc]
100021f7:	ff 
100021f8:	0f 28 c1             	movaps xmm0,xmm1
100021fb:	f3 0f 11 8d 24 ff ff 	movss  DWORD PTR [ebp-0xdc],xmm1
10002202:	ff 
10002203:	f3 0f 11 45 b4       	movss  DWORD PTR [ebp-0x4c],xmm0
10002208:	f3 0f 10 85 4c ff ff 	movss  xmm0,DWORD PTR [ebp-0xb4]
1000220f:	ff 
10002210:	f3 0f 58 85 5c ff ff 	addss  xmm0,DWORD PTR [ebp-0xa4]
10002217:	ff 
10002218:	0f 28 c8             	movaps xmm1,xmm0
1000221b:	f3 0f 11 85 4c ff ff 	movss  DWORD PTR [ebp-0xb4],xmm0
10002222:	ff 
10002223:	f3 0f 11 4d b8       	movss  DWORD PTR [ebp-0x48],xmm1
10002228:	f3 0f 10 8d 20 ff ff 	movss  xmm1,DWORD PTR [ebp-0xe0]
1000222f:	ff 
10002230:	f3 0f 58 ca          	addss  xmm1,xmm2
10002234:	f3 0f 11 4d bc       	movss  DWORD PTR [ebp-0x44],xmm1
10002239:	f3 0f 10 8d 1c ff ff 	movss  xmm1,DWORD PTR [ebp-0xe4]
10002240:	ff 
10002241:	f3 0f 58 8d 44 ff ff 	addss  xmm1,DWORD PTR [ebp-0xbc]
10002248:	ff 
10002249:	0f 28 c1             	movaps xmm0,xmm1
1000224c:	f3 0f 11 8d 1c ff ff 	movss  DWORD PTR [ebp-0xe4],xmm1
10002253:	ff 
10002254:	f3 0f 11 45 c0       	movss  DWORD PTR [ebp-0x40],xmm0
10002259:	f3 0f 10 85 48 ff ff 	movss  xmm0,DWORD PTR [ebp-0xb8]
10002260:	ff 
10002261:	f3 0f 58 85 5c ff ff 	addss  xmm0,DWORD PTR [ebp-0xa4]
10002268:	ff 
10002269:	0f 28 c8             	movaps xmm1,xmm0
1000226c:	f3 0f 11 85 48 ff ff 	movss  DWORD PTR [ebp-0xb8],xmm0
10002273:	ff 
10002274:	f3 0f 11 4d c4       	movss  DWORD PTR [ebp-0x3c],xmm1
10002279:	f3 0f 10 8d 18 ff ff 	movss  xmm1,DWORD PTR [ebp-0xe8]
10002280:	ff 
10002281:	f3 0f 58 ca          	addss  xmm1,xmm2
10002285:	f3 0f 11 4d c8       	movss  DWORD PTR [ebp-0x38],xmm1
1000228a:	f3 0f 10 8d 08 ff ff 	movss  xmm1,DWORD PTR [ebp-0xf8]
10002291:	ff 
10002292:	f3 0f 58 8d 44 ff ff 	addss  xmm1,DWORD PTR [ebp-0xbc]
10002299:	ff 
1000229a:	f3 0f 11 4d cc       	movss  DWORD PTR [ebp-0x34],xmm1
1000229f:	f3 0f 58 9d 5c ff ff 	addss  xmm3,DWORD PTR [ebp-0xa4]
100022a6:	ff 
100022a7:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100022aa:	f3 0f 58 ea          	addss  xmm5,xmm2
100022ae:	f3 0f 11 65 d8       	movss  DWORD PTR [ebp-0x28],xmm4
100022b3:	be 30 10 21 10       	mov    esi,0x10211030
100022b8:	f3 0f 11 5d dc       	movss  DWORD PTR [ebp-0x24],xmm3
100022bd:	f3 0f 11 6d e0       	movss  DWORD PTR [ebp-0x20],xmm5
100022c2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100022c5:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100022ca:	51                   	push   ecx
100022cb:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100022d0:	8d 4d 84             	lea    ecx,[ebp-0x7c]
100022d3:	8d 04 40             	lea    eax,[eax+eax*2]
100022d6:	8d 04 81             	lea    eax,[ecx+eax*4]
100022d9:	57                   	push   edi
100022da:	50                   	push   eax
100022db:	8b 06                	mov    eax,DWORD PTR [esi]
100022dd:	8d 04 40             	lea    eax,[eax+eax*2]
100022e0:	8d 04 81             	lea    eax,[ecx+eax*4]
100022e3:	50                   	push   eax
100022e4:	8b 46 f8             	mov    eax,DWORD PTR [esi-0x8]
100022e7:	8d 04 40             	lea    eax,[eax+eax*2]
100022ea:	8d 04 81             	lea    eax,[ecx+eax*4]
100022ed:	50                   	push   eax
100022ee:	8b 46 fc             	mov    eax,DWORD PTR [esi-0x4]
100022f1:	8d 04 40             	lea    eax,[eax+eax*2]
100022f4:	8d 04 81             	lea    eax,[ecx+eax*4]
100022f7:	50                   	push   eax
100022f8:	e8 23 01 00 00       	call   0x10002420
100022fd:	83 c6 10             	add    esi,0x10
10002300:	83 c4 18             	add    esp,0x18
10002303:	81 fe 90 10 21 10    	cmp    esi,0x10211090
10002309:	7c b7                	jl     0x100022c2
1000230b:	5f                   	pop    edi
1000230c:	5e                   	pop    esi
1000230d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10002310:	33 cd                	xor    ecx,ebp
10002312:	e8 9c b8 13 00       	call   0x1013dbb3
10002317:	8b e5                	mov    esp,ebp
10002319:	5d                   	pop    ebp
1000231a:	c3                   	ret
1000231b:	f3 0f 10 a4 37 74 02 	movss  xmm4,DWORD PTR [edi+esi*1+0x274]
10002322:	00 00 
10002324:	8d 4d 88             	lea    ecx,[ebp-0x78]
10002327:	f3 0f 10 ac 37 78 02 	movss  xmm5,DWORD PTR [edi+esi*1+0x278]
1000232e:	00 00 
10002330:	33 c0                	xor    eax,eax
10002332:	f3 0f 10 b4 37 7c 02 	movss  xmm6,DWORD PTR [edi+esi*1+0x27c]
10002339:	00 00 
1000233b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10002340:	a8 01                	test   al,0x1
10002342:	74 0b                	je     0x1000234f
10002344:	f3 0f 10 8c 37 88 02 	movss  xmm1,DWORD PTR [edi+esi*1+0x288]
1000234b:	00 00 
1000234d:	eb 09                	jmp    0x10002358
1000234f:	f3 0f 10 8c 37 94 02 	movss  xmm1,DWORD PTR [edi+esi*1+0x294]
10002356:	00 00 
10002358:	a8 02                	test   al,0x2
1000235a:	74 0b                	je     0x10002367
1000235c:	f3 0f 10 84 37 8c 02 	movss  xmm0,DWORD PTR [edi+esi*1+0x28c]
10002363:	00 00 
10002365:	eb 09                	jmp    0x10002370
10002367:	f3 0f 10 84 37 98 02 	movss  xmm0,DWORD PTR [edi+esi*1+0x298]
1000236e:	00 00 
10002370:	a8 04                	test   al,0x4
10002372:	74 0b                	je     0x1000237f
10002374:	f3 0f 10 9c 37 90 02 	movss  xmm3,DWORD PTR [edi+esi*1+0x290]
1000237b:	00 00 
1000237d:	eb 09                	jmp    0x10002388
1000237f:	f3 0f 10 9c 37 9c 02 	movss  xmm3,DWORD PTR [edi+esi*1+0x29c]
10002386:	00 00 
10002388:	0f 28 d4             	movaps xmm2,xmm4
1000238b:	40                   	inc    eax
1000238c:	f3 0f 58 d1          	addss  xmm2,xmm1
10002390:	0f 28 cd             	movaps xmm1,xmm5
10002393:	f3 0f 58 c8          	addss  xmm1,xmm0
10002397:	0f 28 c6             	movaps xmm0,xmm6
1000239a:	f3 0f 58 c3          	addss  xmm0,xmm3
1000239e:	f3 0f 11 51 fc       	movss  DWORD PTR [ecx-0x4],xmm2
100023a3:	f3 0f 11 09          	movss  DWORD PTR [ecx],xmm1
100023a7:	f3 0f 11 41 04       	movss  DWORD PTR [ecx+0x4],xmm0
100023ac:	83 c1 0c             	add    ecx,0xc
100023af:	83 f8 08             	cmp    eax,0x8
100023b2:	7c 8c                	jl     0x10002340
100023b4:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100023b7:	be 30 10 21 10       	mov    esi,0x10211030
100023bc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100023c0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100023c3:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100023c8:	51                   	push   ecx
100023c9:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100023ce:	8d 4d 84             	lea    ecx,[ebp-0x7c]
100023d1:	8d 04 40             	lea    eax,[eax+eax*2]
100023d4:	8d 04 81             	lea    eax,[ecx+eax*4]
100023d7:	57                   	push   edi
100023d8:	50                   	push   eax
100023d9:	8b 06                	mov    eax,DWORD PTR [esi]
100023db:	8d 04 40             	lea    eax,[eax+eax*2]
100023de:	8d 04 81             	lea    eax,[ecx+eax*4]
100023e1:	50                   	push   eax
100023e2:	8b 46 f8             	mov    eax,DWORD PTR [esi-0x8]
100023e5:	8d 04 40             	lea    eax,[eax+eax*2]
100023e8:	8d 04 81             	lea    eax,[ecx+eax*4]
100023eb:	50                   	push   eax
100023ec:	8b 46 fc             	mov    eax,DWORD PTR [esi-0x4]
100023ef:	8d 04 40             	lea    eax,[eax+eax*2]
100023f2:	8d 04 81             	lea    eax,[ecx+eax*4]
100023f5:	50                   	push   eax
100023f6:	e8 25 00 00 00       	call   0x10002420
100023fb:	83 c6 10             	add    esi,0x10
100023fe:	83 c4 18             	add    esp,0x18
10002401:	81 fe 90 10 21 10    	cmp    esi,0x10211090
10002407:	7c b7                	jl     0x100023c0
10002409:	5f                   	pop    edi
1000240a:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000240d:	33 cd                	xor    ecx,ebp
1000240f:	5e                   	pop    esi
10002410:	e8 9e b7 13 00       	call   0x1013dbb3
10002415:	8b e5                	mov    esp,ebp
10002417:	5d                   	pop    ebp
10002418:	c3                   	ret
