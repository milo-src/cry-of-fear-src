
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008cd80 <.text+0x8bd80>:
1008cd80:	55                   	push   ebp
1008cd81:	8b ec                	mov    ebp,esp
1008cd83:	53                   	push   ebx
1008cd84:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1008cd87:	85 db                	test   ebx,ebx
1008cd89:	75 28                	jne    0x1008cdb3
1008cd8b:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1008cd8e:	8b 08                	mov    ecx,DWORD PTR [eax]
1008cd90:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008cd95:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008cd9b:	51                   	push   ecx
1008cd9c:	68 bc f1 1b 10       	push   0x101bf1bc
1008cda1:	6a 01                	push   0x1
1008cda3:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008cda9:	83 c4 0c             	add    esp,0xc
1008cdac:	33 c0                	xor    eax,eax
1008cdae:	5b                   	pop    ebx
1008cdaf:	5d                   	pop    ebp
1008cdb0:	c2 0c 00             	ret    0xc
1008cdb3:	56                   	push   esi
1008cdb4:	57                   	push   edi
1008cdb5:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
1008cdb8:	33 f6                	xor    esi,esi
1008cdba:	85 ff                	test   edi,edi
1008cdbc:	7e 34                	jle    0x1008cdf2
1008cdbe:	66 90                	xchg   ax,ax
1008cdc0:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1008cdc3:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
1008cdc6:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1008cdc9:	85 c0                	test   eax,eax
1008cdcb:	75 12                	jne    0x1008cddf
1008cdcd:	68 dc f1 1b 10       	push   0x101bf1dc
1008cdd2:	6a 01                	push   0x1
1008cdd4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008cdda:	83 c4 08             	add    esp,0x8
1008cddd:	eb 0e                	jmp    0x1008cded
1008cddf:	50                   	push   eax
1008cde0:	53                   	push   ebx
1008cde1:	e8 d5 ee 0e 00       	call   0x1017bcbb
1008cde6:	83 c4 08             	add    esp,0x8
1008cde9:	85 c0                	test   eax,eax
1008cdeb:	74 0e                	je     0x1008cdfb
1008cded:	46                   	inc    esi
1008cdee:	3b f7                	cmp    esi,edi
1008cdf0:	7c ce                	jl     0x1008cdc0
1008cdf2:	5f                   	pop    edi
1008cdf3:	5e                   	pop    esi
1008cdf4:	33 c0                	xor    eax,eax
1008cdf6:	5b                   	pop    ebx
1008cdf7:	5d                   	pop    ebp
1008cdf8:	c2 0c 00             	ret    0xc
1008cdfb:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1008cdfe:	5f                   	pop    edi
1008cdff:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
1008ce02:	5e                   	pop    esi
1008ce03:	5b                   	pop    ebx
1008ce04:	5d                   	pop    ebp
1008ce05:	c2 0c 00             	ret    0xc
