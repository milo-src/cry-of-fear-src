
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

1007fa90 <.text+0x7ea90>:
1007fa90:	56                   	push   esi
1007fa91:	8b 35 a4 40 54 10    	mov    esi,DWORD PTR ds:0x105440a4
1007fa97:	85 f6                	test   esi,esi
1007fa99:	74 14                	je     0x1007faaf
1007fa9b:	80 3e 00             	cmp    BYTE PTR [esi],0x0
1007fa9e:	75 07                	jne    0x1007faa7
1007faa0:	8b ce                	mov    ecx,esi
1007faa2:	e8 99 fe ff ff       	call   0x1007f940
1007faa7:	8b ce                	mov    ecx,esi
1007faa9:	5e                   	pop    esi
1007faaa:	e9 91 fc ff ff       	jmp    0x1007f740
1007faaf:	5e                   	pop    esi
1007fab0:	c3                   	ret
