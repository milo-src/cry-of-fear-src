
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011ad70 <.text+0x119d70>:
1011ad70:	55                   	push   ebp
1011ad71:	8b ec                	mov    ebp,esp
1011ad73:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
1011ad76:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011ad7b:	6a 66                	push   0x66
1011ad7d:	68 e0 aa 21 10       	push   0x1021aae0
1011ad82:	83 ba d0 01 00 00 00 	cmp    DWORD PTR [edx+0x1d0],0x0
1011ad89:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011ad8f:	52                   	push   edx
1011ad90:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011ad93:	74 10                	je     0x1011ada5
1011ad95:	03 82 d0 01 00 00    	add    eax,DWORD PTR [edx+0x1d0]
1011ad9b:	50                   	push   eax
1011ad9c:	e8 1f 00 00 00       	call   0x1011adc0
1011ada1:	5d                   	pop    ebp
1011ada2:	c2 08 00             	ret    0x8
1011ada5:	03 02                	add    eax,DWORD PTR [edx]
1011ada7:	50                   	push   eax
1011ada8:	e8 13 00 00 00       	call   0x1011adc0
1011adad:	5d                   	pop    ebp
1011adae:	c2 08 00             	ret    0x8
