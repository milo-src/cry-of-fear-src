
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001fef0 <.text+0x1eef0>:
1001fef0:	55                   	push   ebp
1001fef1:	8b ec                	mov    ebp,esp
1001fef3:	81 ec 04 01 00 00    	sub    esp,0x104
1001fef9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1001fefe:	33 c5                	xor    eax,ebp
1001ff00:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1001ff03:	56                   	push   esi
1001ff04:	8b f1                	mov    esi,ecx
1001ff06:	8b 06                	mov    eax,DWORD PTR [esi]
1001ff08:	ff 50 30             	call   DWORD PTR [eax+0x30]
1001ff0b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001ff0e:	8b 91 b8 00 00 00    	mov    edx,DWORD PTR [ecx+0xb8]
1001ff14:	85 d2                	test   edx,edx
1001ff16:	0f 84 bc 00 00 00    	je     0x1001ffd8
1001ff1c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001ff21:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001ff27:	03 c2                	add    eax,edx
1001ff29:	50                   	push   eax
1001ff2a:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
1001ff30:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1001ff36:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001ff39:	83 c4 08             	add    esp,0x8
1001ff3c:	c6 86 00 01 00 00 00 	mov    BYTE PTR [esi+0x100],0x0
1001ff43:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
1001ff4a:	75 0d                	jne    0x1001ff59
1001ff4c:	c7 80 48 02 00 00 57 	mov    DWORD PTR [eax+0x248],0x457
1001ff53:	04 00 00 
1001ff56:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001ff59:	6a 0a                	push   0xa
1001ff5b:	8d 8d fc fe ff ff    	lea    ecx,[ebp-0x104]
1001ff61:	51                   	push   ecx
1001ff62:	ff b0 48 02 00 00    	push   DWORD PTR [eax+0x248]
1001ff68:	e8 1b c5 15 00       	call   0x1017c488
1001ff6d:	8d 8d fc fe ff ff    	lea    ecx,[ebp-0x104]
1001ff73:	83 c4 0c             	add    esp,0xc
1001ff76:	8d 51 01             	lea    edx,[ecx+0x1]
1001ff79:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1001ff80:	8a 01                	mov    al,BYTE PTR [ecx]
1001ff82:	41                   	inc    ecx
1001ff83:	84 c0                	test   al,al
1001ff85:	75 f9                	jne    0x1001ff80
1001ff87:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001ff8a:	2b ca                	sub    ecx,edx
1001ff8c:	89 88 50 02 00 00    	mov    DWORD PTR [eax+0x250],ecx
1001ff92:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001ff97:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001ff9a:	8b 00                	mov    eax,DWORD PTR [eax]
1001ff9c:	89 81 58 02 00 00    	mov    DWORD PTR [ecx+0x258],eax
1001ffa2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001ffa5:	83 c0 08             	add    eax,0x8
1001ffa8:	50                   	push   eax
1001ffa9:	56                   	push   esi
1001ffaa:	e8 31 a0 0f 00       	call   0x10119fe0
1001ffaf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001ffb2:	83 c4 08             	add    esp,0x8
1001ffb5:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
1001ffbc:	00 00 00 
1001ffbf:	c7 86 80 00 00 00 40 	mov    DWORD PTR [esi+0x80],0x1001fb40
1001ffc6:	fb 01 10 
1001ffc9:	5e                   	pop    esi
1001ffca:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1001ffcd:	33 cd                	xor    ecx,ebp
1001ffcf:	e8 df db 11 00       	call   0x1013dbb3
1001ffd4:	8b e5                	mov    esp,ebp
1001ffd6:	5d                   	pop    ebp
1001ffd7:	c3                   	ret
1001ffd8:	8b 06                	mov    eax,DWORD PTR [esi]
1001ffda:	51                   	push   ecx
1001ffdb:	8b ce                	mov    ecx,esi
1001ffdd:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1001ffe4:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1001ffeb:	ff 50 08             	call   DWORD PTR [eax+0x8]
1001ffee:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1001fff1:	33 cd                	xor    ecx,ebp
1001fff3:	5e                   	pop    esi
1001fff4:	e8 ba db 11 00       	call   0x1013dbb3
1001fff9:	8b e5                	mov    esp,ebp
1001fffb:	5d                   	pop    ebp
1001fffc:	c3                   	ret
