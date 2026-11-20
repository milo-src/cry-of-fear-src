10080a10:	8b 0d bc 40 54 10    	mov    ecx,DWORD PTR ds:0x105440bc
10080a16:	56                   	push   esi
10080a17:	8d 71 02             	lea    esi,[ecx+0x2]
10080a1a:	3b 35 b8 40 54 10    	cmp    esi,DWORD PTR ds:0x105440b8
10080a20:	7e 0f                	jle    0x10080a31
10080a22:	c7 05 c0 40 54 10 01 	mov    DWORD PTR ds:0x105440c0,0x1
10080a29:	00 00 00 
10080a2c:	83 c8 ff             	or     eax,0xffffffff
10080a2f:	5e                   	pop    esi
10080a30:	c3                   	ret
10080a31:	8b 15 b4 40 54 10    	mov    edx,DWORD PTR ds:0x105440b4
10080a37:	b8 00 01 00 00       	mov    eax,0x100
10080a3c:	03 d1                	add    edx,ecx
10080a3e:	98                   	cwde
10080a3f:	89 35 bc 40 54 10    	mov    DWORD PTR ds:0x105440bc,esi
10080a45:	5e                   	pop    esi
10080a46:	0f b6 4a 01          	movzx  ecx,BYTE PTR [edx+0x1]
10080a4a:	0f bf c9             	movsx  ecx,cx
10080a4d:	0f af c8             	imul   ecx,eax
10080a50:	0f b6 02             	movzx  eax,BYTE PTR [edx]
10080a53:	66 03 c8             	add    cx,ax
10080a56:	0f bf c1             	movsx  eax,cx
10080a59:	c3                   	ret
