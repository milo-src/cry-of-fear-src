 1d45b16:	55                   	push   ebp
 1d45b17:	8b ec                	mov    ebp,esp
 1d45b19:	83 3d a0 ba 06 02 00 	cmp    DWORD PTR ds:0x206baa0,0x0
 1d45b20:	75 07                	jne    0x1d45b29
 1d45b22:	b8 9c b6 06 02       	mov    eax,0x206b69c
 1d45b27:	eb 12                	jmp    0x1d45b3b
 1d45b29:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d45b2c:	0f af 05 98 b6 06 02 	imul   eax,DWORD PTR ds:0x206b698
 1d45b33:	8b 0d a0 ba 06 02    	mov    ecx,DWORD PTR ds:0x206baa0
 1d45b39:	03 c1                	add    eax,ecx
 1d45b3b:	5d                   	pop    ebp
 1d45b3c:	c3                   	ret
