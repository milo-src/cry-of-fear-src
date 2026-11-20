
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ccde0 <.text+0xcbde0>:
100ccde0:	55                   	push   ebp
100ccde1:	8b ec                	mov    ebp,esp
100ccde3:	83 ec 0c             	sub    esp,0xc
100ccde6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100ccdeb:	33 c5                	xor    eax,ebp
100ccded:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100ccdf0:	53                   	push   ebx
100ccdf1:	57                   	push   edi
100ccdf2:	8b f9                	mov    edi,ecx
100ccdf4:	33 db                	xor    ebx,ebx
100ccdf6:	39 5f 1c             	cmp    DWORD PTR [edi+0x1c],ebx
100ccdf9:	0f 8e 83 00 00 00    	jle    0x100cce82
100ccdff:	56                   	push   esi
100cce00:	33 f6                	xor    esi,esi
100cce02:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
100cce05:	83 7c 06 08 00       	cmp    DWORD PTR [esi+eax*1+0x8],0x0
100cce0a:	74 6c                	je     0x100cce78
100cce0c:	8b 44 06 0c          	mov    eax,DWORD PTR [esi+eax*1+0xc]
100cce10:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100cce13:	8d 45 f4             	lea    eax,[ebp-0xc]
100cce16:	50                   	push   eax
100cce17:	68 cc 84 1a 10       	push   0x101a84cc
100cce1c:	6a 00                	push   0x0
100cce1e:	c6 45 f8 00          	mov    BYTE PTR [ebp-0x8],0x0
100cce22:	e8 59 b6 04 00       	call   0x10118480
100cce27:	83 c4 0c             	add    esp,0xc
100cce2a:	85 c0                	test   eax,eax
100cce2c:	75 21                	jne    0x100cce4f
100cce2e:	8d 45 f4             	lea    eax,[ebp-0xc]
100cce31:	50                   	push   eax
100cce32:	68 98 73 1d 10       	push   0x101d7398
100cce37:	6a 02                	push   0x2
100cce39:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cce3f:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
100cce42:	83 c4 0c             	add    esp,0xc
100cce45:	c7 44 06 08 00 00 00 	mov    DWORD PTR [esi+eax*1+0x8],0x0
100cce4c:	00 
100cce4d:	eb 29                	jmp    0x100cce78
100cce4f:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
100cce52:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100cce55:	89 44 0e 08          	mov    DWORD PTR [esi+ecx*1+0x8],eax
100cce59:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
100cce5c:	8b 4c 06 08          	mov    ecx,DWORD PTR [esi+eax*1+0x8]
100cce60:	8b 81 a8 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a8]
100cce66:	a9 00 00 01 00       	test   eax,0x10000
100cce6b:	75 0b                	jne    0x100cce78
100cce6d:	05 00 00 01 00       	add    eax,0x10000
100cce72:	89 81 a8 01 00 00    	mov    DWORD PTR [ecx+0x1a8],eax
100cce78:	43                   	inc    ebx
100cce79:	83 c6 18             	add    esi,0x18
100cce7c:	3b 5f 1c             	cmp    ebx,DWORD PTR [edi+0x1c]
100cce7f:	7c 81                	jl     0x100cce02
100cce81:	5e                   	pop    esi
100cce82:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cce85:	b8 01 00 00 00       	mov    eax,0x1
100cce8a:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
100cce8d:	33 cd                	xor    ecx,ebp
100cce8f:	5f                   	pop    edi
100cce90:	5b                   	pop    ebx
100cce91:	e8 1d 0d 07 00       	call   0x1013dbb3
100cce96:	8b e5                	mov    esp,ebp
100cce98:	5d                   	pop    ebp
100cce99:	c3                   	ret
