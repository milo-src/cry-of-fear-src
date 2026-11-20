
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003de0 <.text+0x2de0>:
10003de0:	55                   	push   ebp
10003de1:	8b ec                	mov    ebp,esp
10003de3:	83 ec 1c             	sub    esp,0x1c
10003de6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10003deb:	33 c5                	xor    eax,ebp
10003ded:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10003df0:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003df5:	f3 0f 10 40 38       	movss  xmm0,DWORD PTR [eax+0x38]
10003dfa:	f3 0f 11 45 e4       	movss  DWORD PTR [ebp-0x1c],xmm0
10003dff:	f3 0f 10 40 3c       	movss  xmm0,DWORD PTR [eax+0x3c]
10003e04:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
10003e09:	f3 0f 10 40 40       	movss  xmm0,DWORD PTR [eax+0x40]
10003e0e:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
10003e13:	f3 0f 10 40 38       	movss  xmm0,DWORD PTR [eax+0x38]
10003e18:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10003e1d:	f3 0f 10 40 3c       	movss  xmm0,DWORD PTR [eax+0x3c]
10003e22:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10003e27:	f3 0f 10 40 40       	movss  xmm0,DWORD PTR [eax+0x40]
10003e2c:	f3 0f 5c 05 04 1f 1a 	subss  xmm0,DWORD PTR ds:0x101a1f04
10003e33:	10 
10003e34:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10003e39:	c6 80 f0 00 00 00 00 	mov    BYTE PTR [eax+0xf0],0x0
10003e40:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003e45:	c6 80 f0 01 00 00 43 	mov    BYTE PTR [eax+0x1f0],0x43
10003e4c:	8d 45 f0             	lea    eax,[ebp-0x10]
10003e4f:	50                   	push   eax
10003e50:	8d 45 e4             	lea    eax,[ebp-0x1c]
10003e53:	50                   	push   eax
10003e54:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003e59:	ff b0 e0 00 00 00    	push   DWORD PTR [eax+0xe0]
10003e5f:	8b 80 bc f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5bc]
10003e65:	ff d0                	call   eax
10003e67:	8b c8                	mov    ecx,eax
10003e69:	83 c4 0c             	add    esp,0xc
10003e6c:	85 c9                	test   ecx,ecx
10003e6e:	74 69                	je     0x10003ed9
10003e70:	8a 01                	mov    al,BYTE PTR [ecx]
10003e72:	3c 2d                	cmp    al,0x2d
10003e74:	74 04                	je     0x10003e7a
10003e76:	3c 2b                	cmp    al,0x2b
10003e78:	75 06                	jne    0x10003e80
10003e7a:	8a 41 02             	mov    al,BYTE PTR [ecx+0x2]
10003e7d:	83 c1 02             	add    ecx,0x2
10003e80:	3c 7b                	cmp    al,0x7b
10003e82:	74 0c                	je     0x10003e90
10003e84:	3c 21                	cmp    al,0x21
10003e86:	74 08                	je     0x10003e90
10003e88:	3c 7e                	cmp    al,0x7e
10003e8a:	74 04                	je     0x10003e90
10003e8c:	3c 20                	cmp    al,0x20
10003e8e:	75 01                	jne    0x10003e91
10003e90:	41                   	inc    ecx
10003e91:	8b 15 50 0c 22 10    	mov    edx,DWORD PTR ds:0x10220c50
10003e97:	81 c2 f0 00 00 00    	add    edx,0xf0
10003e9d:	0f 1f 00             	nop    DWORD PTR [eax]
10003ea0:	8a 01                	mov    al,BYTE PTR [ecx]
10003ea2:	8d 49 01             	lea    ecx,[ecx+0x1]
10003ea5:	88 02                	mov    BYTE PTR [edx],al
10003ea7:	8d 52 01             	lea    edx,[edx+0x1]
10003eaa:	84 c0                	test   al,al
10003eac:	75 f2                	jne    0x10003ea0
10003eae:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003eb3:	c6 80 fc 00 00 00 00 	mov    BYTE PTR [eax+0xfc],0x0
10003eba:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003ebf:	05 f0 00 00 00       	add    eax,0xf0
10003ec4:	50                   	push   eax
10003ec5:	e8 26 18 00 00       	call   0x100056f0
10003eca:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10003ed0:	83 c4 04             	add    esp,0x4
10003ed3:	88 81 f0 01 00 00    	mov    BYTE PTR [ecx+0x1f0],al
10003ed9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10003edc:	33 cd                	xor    ecx,ebp
10003ede:	e8 d0 9c 13 00       	call   0x1013dbb3
10003ee3:	8b e5                	mov    esp,ebp
10003ee5:	5d                   	pop    ebp
10003ee6:	c3                   	ret
