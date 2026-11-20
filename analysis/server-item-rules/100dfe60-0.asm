
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dfe60 <.text+0xdee60>:
100dfe60:	55                   	push   ebp
100dfe61:	8b ec                	mov    ebp,esp
100dfe63:	56                   	push   esi
100dfe64:	57                   	push   edi
100dfe65:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100dfe68:	85 ff                	test   edi,edi
100dfe6a:	74 24                	je     0x100dfe90
100dfe6c:	be 01 00 00 00       	mov    esi,0x1
100dfe71:	8b 04 f5 08 1e 23 10 	mov    eax,DWORD PTR [esi*8+0x10231e08]
100dfe78:	85 c0                	test   eax,eax
100dfe7a:	74 0e                	je     0x100dfe8a
100dfe7c:	50                   	push   eax
100dfe7d:	57                   	push   edi
100dfe7e:	e8 38 be 09 00       	call   0x1017bcbb
100dfe83:	83 c4 08             	add    esp,0x8
100dfe86:	85 c0                	test   eax,eax
100dfe88:	74 0d                	je     0x100dfe97
100dfe8a:	46                   	inc    esi
100dfe8b:	83 fe 20             	cmp    esi,0x20
100dfe8e:	7c e1                	jl     0x100dfe71
100dfe90:	5f                   	pop    edi
100dfe91:	83 c8 ff             	or     eax,0xffffffff
100dfe94:	5e                   	pop    esi
100dfe95:	5d                   	pop    ebp
100dfe96:	c3                   	ret
100dfe97:	5f                   	pop    edi
100dfe98:	8b c6                	mov    eax,esi
100dfe9a:	5e                   	pop    esi
100dfe9b:	5d                   	pop    ebp
100dfe9c:	c3                   	ret
